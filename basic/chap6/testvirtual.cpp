class testvirtual
{
private:
    /* data */
public:
    testvirtual(/* args */);
    virtual ~testvirtual();

    virtual void test_func() = 0; // 纯虚函数， 当前类不做实现， 由他的子类去实现
};

testvirtual::testvirtual(/* args */)
{
}

testvirtual::~testvirtual()
{
}

class son : public testvirtual
{
private:
    /* data */
public:
    son(/* args */);
    ~son();

    void test_func();
};

son::son(/* args */)
{
}

son::~son()
{
}

void son::test_func()
{
}

int main()
{
    testvirtual *p;
    son son1;

    p = &son1;
    p->test_func();

    return 0;
}