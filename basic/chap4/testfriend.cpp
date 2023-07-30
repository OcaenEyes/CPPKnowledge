class testfriend
{
private:
    /* data */
    friend void test_friend_1(testfriend obj); // testfriend 把test_friend_1 函数当作朋友， 友元函数, 把test_friend_1 函数就可以调用testfriend类的私有数据

    friend class B; // testfriend B 类当作朋友， 友元类, 则B类 就可以调用testfriend类的私有数据

public:
    testfriend(/* args */);
    ~testfriend();
};

testfriend::testfriend(/* args */)
{
}

testfriend::~testfriend()
{
}

void test_friend_1(testfriend obj)
{
}

class B
{
public:
    void test(testfriend obj);
};

void B::test(testfriend obj){

}

int main()
{
    return 0;
}