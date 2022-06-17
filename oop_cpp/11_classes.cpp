#include <iostream>

using namespace std;

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public :
        // functions (methods)
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

    public :
        // member variables
        double base_radius {1};
        double height {1};
};

int main(int argc, char const *argv[])
{
    Cylinder cylinder_1;  // object
    cout << "Volume : " << cylinder_1.volume() << endl;

    //Change the member variables
    cylinder_1.base_radius = 10;
    cylinder_1.height = 3;

    cout << "Volume : " << cylinder_1.volume() << endl;

    return 0;
}
