#include <iostream>
#include <string>

using namespace std;

// base class
class Parent
{
    protected :

        int id_protected;
};

// sub class
class Child : public Parent
{
    public :

        void setId (int id)
        {
            // Child class is able to access the inherited
            // protected data members of base classes

            id_protected = id;
        }

        void displayId()
        {
            cout << "id_procted is : " << id_protected;
        }
};

int main()
{
    Child obj1;

    obj1.setId(81);
    obj1.displayId();

    return 0;
}
