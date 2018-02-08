#include <iostream>
using namespace std;

int main()
{
	int arr[50],n,i,small,large;

	cout<<"\n\t Enter  elements to insert in array :  ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Enter element :"<<i+1<<":";
		cin>>arr[i];
	}

	small=arr[0];
	large=arr[0];

	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
			small=arr[i];
		if(arr[i]>large)
			large=arr[i];
	}

	cout<<"\nLargest element in array is :"<<large<<endl;
	cout<<"\nSmallest element in array is :"<<small<<endl;

	return 0;
}
