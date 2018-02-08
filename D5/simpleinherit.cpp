/*Simple inheritance program*/

#include<iostream>
using namespace std;

/*Base Class*/
class A
{
    public:
        void func1(void);
};
// function definiion
void A::func1(void)
{
    cout << "Body of func1()" << endl;
}

/*Derived Class*/
class B:public A
{
    public:
        void func2(void);
};
// function definition
void B::func2(void)
{
    cout << "Body of func2()" << endl;
}

int main()
{
    //create object of derived class - class B
    B objB;
    // Now, we can access the function of class A (Base class)
    objB.func1();
    objB.func2();
    return 0;
}

/*
OUTPUT
Body of func1()
Body of func2()
*/
