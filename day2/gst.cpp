#include<iostream>
using namespace std;
int main()
{
	float amount,GST,rate;
	cout<<"\n Enter the Amount of Goods  : \n";
	cin>>amount;
	cout<<"\n Enter the Rate  : \n";
	cin>>rate;
	GST=(amount*rate)/100;
	cout<<"\n GST is :: "<<GST <<"\n";
	return 0;
}
