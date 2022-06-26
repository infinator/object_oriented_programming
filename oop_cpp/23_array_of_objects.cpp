#include <iostream>

using namespace std;

class employee
{
    int id;
    int salary;

    public :

        void set_id(void)
        {
            salary = 122;
            cout << "Enter Id : ";
            cin >> id;
        }
        
        void get_id(void)
        {
            cout << "Id : " << id << endl;
        }
};

int main()
{
    employee e[5];

    for (int i = 0; i < 5; i++)
    {
        e[i].set_id();
        e[i].get_id();
    }

    return 0;
}