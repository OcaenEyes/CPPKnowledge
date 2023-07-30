class test
{
private:
    /* data */
public:
    test(/* args */);
    ~test();

    static int num; // 静态数据成员 ，不能在构造函数中初始化， 也不能在成员参数初始化列表 初始化

    static void fun_1(); // 静态成员函数
};

int test::num = 0; // 可以这样初始化

test::test(/* args */)
{
}

test::~test()
{
}

void test::fun_1()
{
}

int main()
{

    int a = test::num; // 属于类，可以用类名调用

    test::fun_1(); // 属于类，可以用类名调用

    return 0;
}