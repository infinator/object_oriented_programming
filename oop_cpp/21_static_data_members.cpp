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
            cout << "Id : " << id << " " << "Count : " << count << endl;
        }
};

int employee::count = 0;  // default value = 0

int main()
{
    employee suraj, jags, tats;

    suraj.set_data();
    suraj.get_data();

    jags.set_data();
    jags.get_data();

    tats.set_data();
    tats.get_data();

    return 0;
}