//Write a program in c++ using increment(Post and Pre) and decrement operators

//1) INCREMENT OPERATORS  :~
#include <iostream>
using std::cout;
using std::endl;

int main()
{
int b;

//Postincrement
b = 8;
cout << "Value of b : "<< b << endl;
cout << "Postincrement : " << b++ << endl;
cout << "After Postincrement Value of b : " << b << endl;

cout << endl;

//Preincrement
b = 8;
cout << "Value of b : " << b << endl;
cout << "Preincrement : " << ++b << endl;
cout <<"After Preincrement Value of b : " << b << endl;
return 0;
}

/*Output :~

Value of b : 8
Postincrement : 8
After Postincrement Value of b : 9

Value of b : 8
Preincrement : 9
After Preincrement Value of b : 9
*/

