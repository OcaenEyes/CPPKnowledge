#include <iostream>
class Fa
{
private:
    /* data */
public:
    Fa(/* args */);
    virtual ~Fa(); // 父类 虚析构

    virtual void test_func(); // 声明虚函数
};

Fa::Fa(/* args */)
{
}

Fa::~Fa()
{
}
void Fa::test_func()
{
    std::cout << "fa" << std::endl;
}

// 子类一
class Son : public Fa
{
private:
    /* data */
public:
    Son(/* args */);
    ~Son();

    void test_func(); // 相当于在子类son内， 把fa 父类的 虚函数 test_func重新实现了一下
};

Son::Son(/* args */)
{
}

Son::~Son()
{
}
void Son::test_func()
{
    std::cout << "son" << std::endl;
}

// 子类2
class Son1 : public Fa
{
private:
    /* data */
public:
    Son1(/* args */);
    ~Son1();

    void test_func(); // 相当于在子类son1内， 把fa 父类的 虚函数 test_func重新实现了一下
};

Son1::Son1(/* args */)
{
}

Son1::~Son1()
{
}

void Son1::test_func()
{
    std::cout << "son1" << std::endl;
}

int main()
{
    Fa *p;

    Fa fa;
    Son son;
    Son1 son1;

    p = &fa;
    p->test_func(); // 根据指针 指向的类型，进行调用对应的函数，动态联编

    p = &son;
    p->test_func();

    p = &son1;
    p->test_func();

    delete p;
    p = NULL;

    return 0;
}