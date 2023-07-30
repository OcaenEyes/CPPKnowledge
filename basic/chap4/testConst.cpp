class testConst
{
private:
    /* data */
public:
    testConst(/* args */);
    testConst(int v);
    ~testConst();

    int num;
    const int val; // 常量数据成员 ，使用成员初始化列表

    void func_1();

    void func_2() const; // 常量成员函数
};

testConst::testConst(/* args */) : val(10) // 使用成员初始化列表给值
{
}

testConst::testConst(int v) : val(v) // 使用成员初始化列表给值
{
}

testConst::~testConst()
{
}

void testConst::func_1()
{
}

void testConst::func_2() const // 类的外面 实现 常量成员函数时， const 是属于函数的一部分名不能省略 
{
}

int main()
{
    return 0;
}