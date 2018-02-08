/* Write a program in C++ to swap values of two variables using pointers.*/


#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
int x = 0, y = 0;
cout<<"Enter the Value of a and b : ";
cin>>x>>y;
swap(&x, &y);
cout<<"\nAfter Swapping value of a ="<<x<<" and value of b ="<<y;

return 0;
}
