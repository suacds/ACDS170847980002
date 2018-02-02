#include<iostream>
using namespace std;
void read_matrix(int m[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"\n Enter matrix elements :\t";
			cin>>m[i][j];
		}
	}
}
void display_data(int m[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<m[i][j];
		}
		cout<<"\n";
	}

}
int main()
{

	int m[10][10],r,c,ch;
	cout<<"\n Enter number of rows = \t";
	cin>>r;
	cout<<"\n Enter number of columns = \t";
	cin>>c;
	do
	{
		cout<<"\n 1. ENTER MATRIX ELEMENTS";
		cout<<"\n 2. DISPLAY MATRIX ";
		cout<<"\n 3. EXIT";
		cout<<"\n ENTER YOUR CHOICE : \t";
		cin>>ch;
		switch(ch)
		{
			case 1: read_matrix(m,r,c);
			break;
			case 2:   display_data(m,r,c);
			break;

		}


	}while(ch<2);

       //	read_mat()



	return 0;
}
