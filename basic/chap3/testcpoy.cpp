#include <stdio.h>

class testcpoy
{
private:
    /* data */

public:
    int m_age;
    int m_weight;
    float m_spped;
    int *p;

public:
    testcpoy(/* args */);
    ~testcpoy();

    testcpoy(int age, int weight, float spped);

    testcpoy(testcpoy &obj); // 拷贝构造函数，第一个参数是 本类型的对象的 引用

    testcpoy(testcpoy &obj, int i); // 拷贝构造函数，第一个参数是 本类型的对象的 引用

    testcpoy(testcpoy &obj, int i, int j); // 拷贝构造函数，都一个参数是 本类型的对象的 引用
};

testcpoy::testcpoy(/* args */)
{
    // 无参数构造
    p = NULL;
}

testcpoy::~testcpoy()
{
    // 析构
}

testcpoy::testcpoy(int age, int weight, float spped)
{
    // 有参数构造
    p = new int[10];
}

testcpoy::testcpoy(testcpoy &obj)
{
    // 拷贝构造
    p = new int(10);
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        p[i] = obj.p[i];
    }
}

testcpoy::testcpoy(testcpoy &obj, int i)
{
}

testcpoy::testcpoy(testcpoy &obj, int i, int j)
{
}

void test_func_1(testcpoy obj)
{
}

testcpoy test_func_2()
{
    testcpoy obj; // 会被释放
    return obj;   // 返回出去的是 obj的复制体
}

int main()
{

    testcpoy test01;

    testcpoy test02(11, 12, 2.0);

    testcpoy test03 = test01;

    testcpoy test04(test01);

    testcpoy test05(test01, 12);

    testcpoy *p = new testcpoy; // new 出来的无参数构造， 需要手动delete， 需要主动还

    delete p;
    p = NULL;

    test_func_1(test01); // - 函数的参数是 类的对象

    test_func_2(); //    - 函数的返回值是 类的对象

    return 0;
}