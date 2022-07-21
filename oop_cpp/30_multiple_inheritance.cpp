#include <iostream>

using namespace std;

class my_class  // Base class
{
    public :

        void my_func()
        {
            cout << "Some content is in parent class." << endl;
        }
};

class my_other_class  // another base class
{
    public :

        void my_other_func()
        {
            cout << "Some content is in another parent class." << endl;
        }
};

class my_child_class : public my_class, public my_other_class
{
};

int main()
{
    my_child_class ob;
    ob.my_func();
    ob.my_other_func();

    return 0;
}