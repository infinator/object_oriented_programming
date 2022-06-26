#include <iostream>

using namespace std;

class employee
{
    static int count;
    int id;

    public :

        void set_data(void)
        {
            cout << "Enter Id : ";
            cin >> id;
            
            count ++;
        }

        void get_data(void)
        {
            cout << "Id : " << id << endl;
        }

        static void get_count(void) 
        {
            cout << "Count : " << count << endl << endl;
        }
};

int employee::count = 0;  // default value = 0

int main()
{
    employee suraj, jags, tats;

    suraj.set_data();
    suraj.get_data();
    employee::get_count();

    jags.set_data();
    jags.get_data();
    employee::get_count();

    tats.set_data();
    tats.get_data();
    employee::get_count();

    return 0;
}