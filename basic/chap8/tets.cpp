#include <iostream>

/**
 * 通过函数模板 定义模板函数
 * template <typename Type1,...,typename TypeN>
 * 返回值类型  函数名(形参列表){
 *   函数体
 * }
 */

template <typename T> // 类型参数表
T test_func(T a, T b)
{
    return a + b;
}

int main()
{
    int a = test_func(2, 3);
    std::cout << a << std::endl;
    return 0;
}