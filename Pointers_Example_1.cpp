// my first pointer
#include <iostream>
using namespace std;
int main ()
{
int firstvalue, secondvalue;
int * mypointer;
mypointer = &firstvalue;
*mypointer = 10;
mypointer = &secondvalue;
*mypointer = 20;
cout << "firstvalue is " << firstvalue << endl;
cout << "secondvalue is " << secondvalue << endl;
return 0;
};


//What is the output?
// Output:
// firstvalue is 10
// secondvalue is 20

//Can you explain how memory and pointer work?
//A pointer references a location in memory. Getting a value from a stored location is called dereferencing. 