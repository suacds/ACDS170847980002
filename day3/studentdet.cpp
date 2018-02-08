#include<iostream>
using namespace std;

struct stud
{
	int roll;
	char nm[50];
	float m1, m2, m3;
};

typedef stud S;

int main()
{
	S student[10];

	for(int i =0 ; i < 10 ; i++)
	{
		cout << "\n Enter Roll no :  \t";
		cin >> student[i].roll;

		cout << "\n Enter Name : \t";
		cin>>student[i].nm;

		cout << "\n Enter marks of three subjects : \t";
		cin >> student[i].m1 >> student[i].m2 >> student[i].m3 ;

	}

	cout<< "\n STUDENTS FAILED IN MORE THAN 1 SUBJECT \n ";
	for(int i =0 ; i < 10 ; i++)
	{
		if(( student[i].m1< 40 && student[i].m2 < 40) || (student[i].m2 < 40 && student[i].m3 < 40) ||
		( student[i].m1 < 40 && student[i].m3 < 40))
		cout << student[i].roll  << "\t" << student[i].nm << "\n";
	}


}
