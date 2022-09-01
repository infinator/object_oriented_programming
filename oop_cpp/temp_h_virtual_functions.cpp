#include <iostream>

using namespace std;

class BaseClass
{
    public :

        int var_base;

        virtual void display();
};
void BaseClass :: display()
{
    cout << "1 Var Base : " << var_base << endl;
}

class DerivedClass : public BaseClass
{
    public :

        int var_d;

        void display();
};
void DerivedClass :: display()
{
    cout << "2 Var Base : " << var_base << endl;
    cout << "2 Var Derived : " << var_d << endl;
}

int main()
{
    BaseClass obj_base;
    DerivedClass obj_d;

    BaseClass* base_class_pointer;
    base_class_pointer = &obj_d;  // pointing base class pointer to the derived class.

    base_class_pointer->var_base = 10;
    base_class_pointer->display();

    return 0;
}