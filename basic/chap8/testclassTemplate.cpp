#include <iostream>

/**
 * template <类型参数列表>
 * class 模板类名{
 *  成员
 * }
 *
 * 类型参数列表: <class T1,...class Tn>
 *
 **/

template <class T1, class T2>
class testclassTemplate
{
private:
    /* data */
    T1 name;
    T2 age;

public:
    testclassTemplate(T1 i, T2 j) : name(i), age(j){};
    ~testclassTemplate();
    // get /set
    T1 getName() { return name; }
    T2 getAge() { return age; }

    void setName(T1 i) { name = i; }
    void setAge(T2 j) { age = j; }

    void showData();
};

template <typename T1, typename T2>
void testclassTemplate<T1, T2>::showData()
{
    std::cout << "测试" << std::endl;
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}
template <typename T1, typename T2>
testclassTemplate<T1, T2>::~testclassTemplate()
{
}

void test_func(testclassTemplate<int, int> &obj)
{
    obj.showData();
}

template <typename TT1, typename TT2> // 将类型当作模板
void test_func1(testclassTemplate<TT1, TT2> &obj)
{
    obj.showData();
}

template <class TTT1> // 直接将类作为模板
void test_func2(TTT1 &obj)
{
    obj.showData();
}

/**
 * 模板类的继承
 */
template <class F_type>
class Father
{
public:
    F_type num;
};

template <class S_type1, class S_type2>
class Son : public Father<S_type2>
{
public:
    S_type1 val;
};

int main()
{

    testclassTemplate<int, int> data1(1, 2);
    data1.showData();

    testclassTemplate<char, int> data2('qwe', 21);
    data2.showData();

    test_func(data1);

    test_func1<int, int>(data1);

    test_func2<testclassTemplate<char, int>>(data2);

    Son<int, double> obj;
    obj.num;
    obj.val;

    return 0;
}