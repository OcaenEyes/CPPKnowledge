#include <iostream>
class A
{
public:
    A();
    ~A();
    int val;
    int num;
};

A::A()
{
    num = 10;
}
A::~A()
{
}

class B : public A
{
public:
    B();
    ~B();
    int num;
};

B::B()
{
    num = 20;
}

B::~B()
{
}

int main()
{

    B b;
    std::cout << "b.num " << b.num << std::endl; // 加载子类的num,忽略了父类的num

    std::cout << "b.A::num " << b.A::num << std::endl; // 加载父类的num
    A a;
    a = b; // 父类对象 不能给 子类对象赋值， 但 子类对象 可以给父类对象赋值

    A *p1;
    B *p2;
    p1 = &b; // 父类指针  可以指向 子类对象 ， 但 子类指针  不能 指向父类对象
}