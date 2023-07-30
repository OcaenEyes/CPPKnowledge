class testfinal
{
private:
    /* data */
public:
    testfinal(/* args */);
    ~testfinal();

    virtual void test() ;
};

testfinal::testfinal(/* args */)
{
}

testfinal::~testfinal()
{
}

class son : public testfinal
{
private:
    /* data */
public:
    son(/* args */);
    ~son();

    void test() final;
};

son::son(/* args */)
{
}

son::~son()
{
}
