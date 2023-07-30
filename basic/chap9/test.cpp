
#include <iostream>
#include <exception>

double test_func(double a, double b)
{
    if (b == 0.0)
    {
        // throw 抛出异常
        // 抛出异常信息：支持多种类型
        throw "这里有异常！b不能为0！！！"; // 触发throw则会中断 test_func程序，后面的就不会再执行
    }
    return a / b;
}

// 自定义异常类
class CustomException : public exception
{
public:
    const char *what() const;
};

const char *CustomException::what() const
{
    return "自定义的异常";
}

int main()
{
    std::cout << "test" << std::endl;

    try
    {
        test_func(1, 0);
    }
    catch (const char *str)
    {
        std::cerr << str << '\n';
        std::cout << typeid(str).name() << '\n';
        std::cout << __cplusplus << std::endl;
    }

    CustomException obj;
    std::cout << obj.what() << '\n';

    return 0;
}