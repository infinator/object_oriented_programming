#include <iostream>

using namespace std;

class Vehicle  // Base class
{
    public :

        string brand = "Ford";

        void honk()
        {
            cout << "Tuut, tuut!" << endl;
        }
};

class Car : public Vehicle
{
    public :
        string model = "Mustang";
};

int main()
{
    // In C++, it is possible to inherit attributes and methods from one class to another. 
    // We group the "inheritance concept" into two categories:

    // derived class (child) - the class that inherits from another class
    // base class (parent) - the class being inherited from

    // To inherit from a class, use the : symbol.

    Car my_car;
    my_car.honk();
    cout << my_car.brand + " " + my_car.model;

    return 0;
}