#include <iostream>

using namespace std;

int main()
{
    // The public keyword is an access specifier. 
    // Access specifiers define how the members (attributes and methods) of a class can be accessed. 
    // In the example above, the members are public - which means that they can be accessed and modified from outside the code.

    // Three types of specifiers :
    // public, private, protected

    // protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

    // here we'll be seeing the public and private

    /*
    class MyClass 
    {
        public:      // Public access specifier
            int x;   // Public attribute
        private:     // Private access specifier
            int y;   // Private attribute
    };

    int main() 
    {
        MyClass myObj;

        myObj.x = 25;    // Allowed (public)
        myObj.y = 50;    // Not allowed (private)
            
        return 0;
    }
    */

    return 0;
}