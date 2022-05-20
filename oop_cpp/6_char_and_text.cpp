#include <iostream>

using namespace std;

int main()
{
    // ASCII Table Source : https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

    char value {65};
    cout << "Character : " << value << endl;  // print A bcuz it is char type
    cout << "Value : " << static_cast<int>(value) << endl;

    return 0;
}