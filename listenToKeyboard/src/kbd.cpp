#include "kbd/kbd.hpp"
#include <linux/input.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
namespace keyboard
{
    Kbd::Kbd(const char *devicePath)
    {
        m_fd = open(devicePath, O_RDONLY);
        if (m_fd == -1)
            throw "Error in openning the file.";
    }
    void Kbd::Listen()
    {
        printf("Listenning...");
        while (true)
        {
            m_bytes = read(m_fd, &m_event, sizeof(m_event));
            if (m_bytes == -1)
                if (errno == EINTR)
                    continue;
                else
                    break;
            else
            {
                if (m_bytes != sizeof(m_event))
                {
                    errno = EIO;
                    break;
                }
            }
            if (m_event.type == EV_KEY && m_event.value >= 0 && m_event.value <= 2)
            {

                printf("%s 0x%04x (%d)\n", m_evval[m_event.value], (int)m_event.code, (int)m_event.code);
            }
        }
    }
    Kbd::~Kbd()
    {
    }
} // namespace keyboard