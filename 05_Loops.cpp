#include <iostream>

int main()
{
    // for 循环
    for (int i = 0; i < 5; i++)
    {
        if (i > 2)
        {
            continue; // i > 2 时跳过下面语句
        }
        std::cout << "hello" << std::endl;
        std::cout << i << std::endl;
    }

    // while 循环
    int i = 0;
    while (i < 5)
    {
        std::cout << "hello world" << std::endl;
        i++;
        if (i == 2)
        {
            break; // i = 2 时退出循环
        }
    }
}