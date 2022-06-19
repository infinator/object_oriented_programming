#include <iostream>

using namespace std;

class Box
{
   public:

      Box() { 
         cout << "Constructor is called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor is called!" <<endl; 
      }
};

int main()
{
   Box* myBoxArray = new Box[4];

   delete [] myBoxArray; // Delete array

   return 0;
}