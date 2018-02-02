//2) DECREMENT OPERATORS  :~

#include <iostream>
using std::cout;
using std::endl;

int main()
{
int b;

// Postdecrement
b = 8;
cout << "Value of b : "<< b << endl;
cout << "Postdecrement : " << b-- << endl;
cout << "After Postdecrement Value of b : " << b << endl;

cout << endl;

// Predecrement
b = 5;
cout << "Value of b : " << b << endl;
cout << "Predecrement : " << --b << endl;
cout <<"After Predecrement Value of b : " << b << endl;
return 0;
}

/*Output :~
Value of b : 8
Postdecrement : 8
After Postdecrement Value of b : 7

Value of b : 5
Predecrement : 4
After Predecrement Value of b : 4
*/


