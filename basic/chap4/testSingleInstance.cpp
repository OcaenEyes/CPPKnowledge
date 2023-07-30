#include <iostream>
class testSingleInstance
{
private:
    /* data */
    testSingleInstance(/* args */);
    testSingleInstance(const testSingleInstance &obj);

    static testSingleInstance *p_instance;

public:
    ~testSingleInstance();
    static testSingleInstance *getInstance();
};

testSingleInstance *testSingleInstance::p_instance = NULL;
testSingleInstance::testSingleInstance(/* args */)
{
}

testSingleInstance::testSingleInstance(const testSingleInstance &obj)
{
}
testSingleInstance::~testSingleInstance()
{
}

testSingleInstance *testSingleInstance::getInstance()
{
    if (p_instance == NULL)
    {
        p_instance = new testSingleInstance;
    }
    return p_instance;
}