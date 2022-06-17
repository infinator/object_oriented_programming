#include <iostream>

using namespace std;

class Car 
{
    public:
        // attributes
        string brand;
        string model;
        int year;

        Car (string x, string y, int z)  // Constructor with params
        {
            brand = x;
            model = y;
            year = z;
        }
};

int main(int argc, char const *argv[])
{
    // Constructors : Aspecial kind of method that is called when an instance of a class is created
    // * No return type
    // * Same name as the class
    // * Can have parameters. Can also have empty parameters
    // * Usually used to initiate member variables of a class

    /*
    Example :

    class MyClass           // The class
    {         
        public:             
            MyClass()       // Constructor
            {     
            cout << "Hello World!";
            }
    };

    int main() {
        MyClass myObj;      // Create an object of MyClass (this will call the constructor)
        return 0;
    }
    */

    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.model << " of " << carObj1.brand << " is born in " << carObj1.year << endl;
    cout << carObj2.model << " of " << carObj2.brand << " is born in " << carObj2.year << endl;

    return 0;
}
