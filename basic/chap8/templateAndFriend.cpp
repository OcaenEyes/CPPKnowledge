#include <iostream>

template <class T>
class A
{
private:
    /* data */
    T m_a;

    friend void show(A<T> &obj)
    {

    } // 模板类的友元函数

public:
    A(T t = 0) : m_a(t) {}
    ~A() {}
};

template <typename T>
int main()
{
    A<int> obja;
    show(obja);
}