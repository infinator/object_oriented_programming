#include <iostream>

using namespace std;

const int SIZE=5;

class student
{
    int roll_no;
    int marks[SIZE];

    public :

        void get_data();
        void total_marks();  
};
void student::get_data()
{
    cout << "Enter roll no. : ";
    cin >> roll_no;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter marks in subject " << i+1 << " : ";
        cin >> marks[i];
    }
}
void student::total_marks()
{
    int total = 0;

    for (int i = 0; i < SIZE; i++)
    {
        total += marks[i];
    }

    cout << "Total marks : " << total;
}

int main()
{
    student s;

    s.get_data();
    s.total_marks();

    return 0;
}