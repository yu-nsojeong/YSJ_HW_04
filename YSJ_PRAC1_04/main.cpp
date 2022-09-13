#include <iostream>

using namespace std;


class Parent{
public:
    void func(){cout<< " parent class's func call !"<<endl;}



               };
class Child : public Parent{

public:

    void func() {cout << "child class's func call!"<<endl;}

};




int main()
{

    Parent P, *pP;
    Child C;

    pP=&P;
    pP->func();
    pP = &C;
    pP->func();


    return 0;
}
