#include <iostream>

using namespace std;

class Employee
{
    protected :
        int salary;
};

class Programmer : public Employee
{
    public :

        int bonus;

        void set_salary(int s)
        {
            salary = s;
        }

        int get_salary()
        {
            return salary;
        }
};

int main()
{
    Programmer ob;
    ob.set_salary(5000);
    ob.bonus = 100;
    cout << "Salary: " << ob.get_salary() << "\n";
    cout << "Bonus: " << ob.bonus << "\n";

    return 0;
}