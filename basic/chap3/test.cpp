class test
{
private:
    /* data */
    int value;

public:
    test(/* args */);
    ~test();

    const int id = 0; // id变成常量
    const int td = 0; // id变成常量

    test(int v, int n);

    void set_value(int v); // 设置私有变量

    int get_value(); // 获取私有变量

    int num;
};

test::test(/* args */)
{
}

test::test(int v, int n) : id(v), td(n) //  使用成员函数列表给 成员赋值
{
    num = n;
    value = v;
}

test::~test()
{
}

void test::set_value(int v)
{
}

int test::get_value()
{
}

int main()
{

    test _t; // 创造对象时候，自动调用构造函数test()

    test _t1(1, 2); // 创建对象时候，自动调用构造函数 test(int v, int n)

    test *p = new test;        // 无参构造test类型的指针
    test *p1 = new test(1, 2); // 有参构造test类型的指针

    return 0;
}