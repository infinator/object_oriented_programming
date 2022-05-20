#include <iostream>

using namespace std;

int main()
{
    bool red_light {true};
    bool green_light {false};

    if (red_light == true)
    {
        cout << "Stop!" << endl << "Because red light is : " << red_light << endl;
    }else
    {
        cout << "Go through!" << endl << "Because red light is : " << red_light << endl;
    }

    bool t {true};
    bool f {false};

    cout << t << endl;  // prints 1
    cout << f << endl;  // prints 0

    cout << boolalpha;  // now we can print true and false

    cout << t << endl;
    cout << f << endl;

    return 0;
}