#include <iostream>
using namespace std;

class A {
    public:
    virtual int foo() = 0;

};

class B: public A{
    public:
    int foo(){
        cout << "hello "  << endl;
        return 0;
    }


}; 


int main() 
{
    B test;
    test.foo();
    return 0;
};

