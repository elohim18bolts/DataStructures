#include <iostream>
#include "linklist/linklist.hpp"
// #include "kbd/kbd.hpp"
int main()
{
    int a = 89;
<<<<<<< HEAD
    // ds::Linklist list((void *)&a);
    // std::cout << *(int *)list[1] << "\n";
    // keyboard::Kbd kbd("/dev/input/by-path/platform-i8042-serio-0-event-kbd");
    // kbd.Listen();

=======
    double b = 34;
    std::string str = "Hello";
    ds::Linklist list((void *)&a);
    list.Add((void*)&b);
    list.Add((void*)&str);
    std::cout << *(int*)list[0] << "\t" << *(double*)list[1] << "\t" << *(std::string*)list[2]<< list.Length() << "\n";
>>>>>>> b9d59f08a50e381bbb11840286527cb60692783c
    return 0;
}