int main() 
{
    //  整数类型 (Integer Types) 
    char c = 'A';                    // 字符型, 1 byte, -128 ~ 127
    unsigned char uc = 255;          // 无符号字符型, 1 byte, 0 ~ 255
    
    short s = 8;                     // 短整型, 2 bytes, -32,768 ~ 32,767
    unsigned short us = 8;           // 无符号短整型, 2 bytes, 0 ~ 65,535
    
    int i = 8;                       // 整型, 4 bytes, -2^31 ~ 2^31-1
    unsigned int ui = 8;             // 无符号整型, 4 bytes, 0 ~ 2^32-1
    
    long long ll = 8;                // 长长整型, 8 bytes, -2^63 ~ 2^63-1
    unsigned long long ull = 8;      // 无符号长长整型, 8 bytes, 0 ~ 2^64-1

    //  浮点类型 (Floating Point Types) 
    float f = 5.5f;                  // 单精度浮点型, 4 bytes, 1.2E-38 ~ 3.4E+38
    double d = 5.5;                  // 双精度浮点型, 8 bytes, 2.3E-308 ~ 1.7E+308

    //  其他类型 (Other Types) 
    bool b = true;                   // 布尔型, 1 byte, true(1) / false(0)
}