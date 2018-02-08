/* Declare a structure to represent a complex number (a number having a real part and imaginary part). Write C++ functions to add, subtract, multiply and divide two complex numbers.*/

#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
struct complex
{
float real;
float img;
}a1,a2;

int main()
{
float a,b;
cout<<"Enter Real and Imaginary Part of 1st Complex Number : ";
cin>>a1.real>>a1.img;
cout<<"Enter Real and Imaginary Part of 2nd Complex Number : ";
cin>>a2.real>>a2.img;

//Addition
a=(a1.real)+(a2.real);
b=(a1.img)+(a2.img);
cout<<"\n Addition : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

//Subtraction
a=(a1.real)-(a2.real);
b=(a1.img)-(a2.img);
cout<<"\n Subtraction : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

//Multiplication
a=((a1.real)*(a2.real))-((a1.img)*(a2.img));
b=((a1.real)*(a2.img))+((a2.real)*(a1.img));
cout<<"\n Multiplication : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

//Division
a=(((a1.real)*(a2.real))+((a1.img)*(a2.img)))/(pow(a2.real,2)+pow(a2.img,2));
b=(((a2.real)*(a1.img))-((a1.real)*(a2.img)))/(pow(a2.real,2)+pow(a2.img,2));

cout<<"\n Division : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

return 0;
}
