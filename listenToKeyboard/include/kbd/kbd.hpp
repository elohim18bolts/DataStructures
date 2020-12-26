#ifndef KBD_HPP
#define KBD_HPP

#include <linux/input.h>
namespace keyboard
{

    class Kbd
    {
    public:
        /**
         * The constructor will recieve the device path.
         * Will try to open it, if there is an error the program 
         * the constructor will throw an exception.
         * @param[in] devicePath which is of type const char*.
         */

        Kbd(const char *devicePath);
        ~Kbd();
        /**
         * Listen for keyboard event.
         * */
        void Listen();
        Kbd(const Kbd &) = delete;

    private:
        const char *m_evval[3] = {"RELEASED", "PRESSED", "REPEATED"};
        input_event m_event;
        size_t m_bytes;
        int m_fd;
    };
} // namespace keyboard
#endif