#include <iostream>

/**
 * 单继承
 *
 */

// 父类
class A
{
public:
    A();
    ~A();
    int pub;
    void pub_fun(){};

private:
    int pri;
    void pui_fun(){};

protected:
    int pro;
    void pro_fun(){};
};

A::A()
{
}
A::~A()
{
}

// 子类
// class 子类名称 : 继承权限 父类名
class B : public A // 常用 公有继承
{
public:
    B();
    ~B();
};

B::B()
{
}
B::~B()
{
}

/**
 * 多继承
 *
 */

// 父类
class AA
{
};

class BB
{
};

// 子类
// class 子类名称 : 继承权限 父类名1, 继承权限 父类名2, ... ,继承权限 父类名N
// 继承权限：
// 公有继承 public
// 私有继承 private
// 保护继承 protected
class CC : public AA, public BB
{
};

int main()
{
    std::cout << "sizeof(A)" << sizeof(A) << std::endl;
    std::cout << "sizeof(B)" << sizeof(B) << std::endl;
    
    
}