/* Write the definition for a class called budget that has floating point data members income and tax. The class has the following member functions:

void show(float, float) to set the specified value in object
void display() to display income and tax
void calculate () to calculate tax on the basis of income (Rs 10000.0) and tax rate (18.0)
*/

#include <stdio.h>
#include<iostream>
using namespace std;

class Budget
{
	float INCOME,TAX;
	public:

  	void show(float inc, float tax)
	{
		cout << "\n Enter the Total Income : \t";
  		cin >>INCOME;
  		cout << "\n Enter the Tax Rate on Income : \t";
  		cin >> TAX;

		inc=INCOME;
		tax=TAX;
	}

	void display()
	{
		cout<<"\n Total Income of Employee : "<<INCOME;
		cout<<"\n Total Tax on Income: "<<TAX;
	}

	void calculate()
	{
		float taxval;
		taxval=((INCOME*TAX)/100);
		cout<<"\n Total Income Tax Value : "<<taxval<<"\n";
	}

};

int main()
{

	Budget B;
	B.show(54,44);
	B.display();
	B.calculate();

    return 0;
}


