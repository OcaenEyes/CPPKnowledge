#include <iostream>
#include <fstream>

int main()
{
    fstream obj;

    obj.open("test1.txt", ios::out); // 打开文件，(文件路径，打开方式)
    obj.put('s12ad');                // 写入
    obj.close();
    obj.open("test1.txt", ios::in); // 打开文件，(文件路径，打开方式)
    char outt;
    outt = obj.get(); // 读取
    // obj.get(outt); // 读取
    std::cout << outt << std::endl;
    obj.close();
    // obj.is_open(); // 是否打开
    // obj.eof(); // end of file 是否到到文件底部

    // 使用二进制的方式读写文件 , 效率高，但是文件的内容无法人工看懂
    obj.open("test2.txt", ios::out); // 打开文件，(文件路径，打开方式)
    int num = 90;
    obj.write((const char *)&num, sizeof(int)); // 写入
    obj.close();

    obj.open("test2.txt", ios::in); // 打开文件，(文件路径，打开方式)
    int val = 0;
    obj.read((char *)&val, sizeof(int)); // 读取
    std::cout << outt << std::endl;
    obj.close();

    // 使用重载<<和>>读写文件
    obj.open("test3.txt", ios::out); // 打开文件，(文件路径，打开方式)
    obj << "GZY";                    // 写入
    obj.close();

    obj.open("test3.txt", ios::in); // 打开文件，(文件路径，打开方式)
    char val[1024];
    obj >> val; // 读取
    std::cout << outt << std::endl;
    obj.close();

    return 0;
}
