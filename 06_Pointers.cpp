#include <iostream>

int main()
{
    int var = 8;
    int* ptr = &var; // 获取 var 的内存地址
    *ptr = 10; // 修改该内存地址所对应变量的值
    std::cout << var << std::endl;
}