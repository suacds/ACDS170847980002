/*Program to read and print students information using two classes and simple inheritance.*/

#include <iostream>
using namespace std;

//Base class
class Stud_Info
{
	private:
		char name[25];
		int  age;
		char gender;
	public:
		void getDetails(void);
		void putDetailso(void);
};

//function definitions
void Stud_Info::getDetails(void)
{
	cout << "Enter student information:" << endl;
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Gender: ";
	cin >> gender;
}

void Stud_Info::putDetailso(void)
{
	cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}

//Derived class
class std_result_info:public Stud_Info
{
	private:
		int 	totalM;
		float 	perc;
		char 	grade;
	public:
		void getResultInfo(void);
		void putResultInfo(void);
};

//function definitions
void std_result_info::getResultInfo(void)
{
	cout << "Enter student's result information:" << endl;
	cout << "Total Marks?: "; 	cin >> totalM;
	perc= (float)((totalM*100)/500);
	cout << "Grade?: ";cin >> grade;
}

void std_result_info::putResultInfo(void)
{
	cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}

int main()
{
	//create object of derived class
	std_result_info std;

	//read student basic and result information
	std.getDetails();
	std.getResultInfo();

	//print student basic and result information
	std.putDetailso();
	std.putResultInfo();

	return 0;
}

/*
OUTPUT

Enter student information:
Name: WIll
Age: 17
Gender: M
Enter student's result information:
Total Marks?: 78
Grade?: B+
Name: WIll,Age: 17,Gender: M
Total Marks: 78,Percentage: 15,Grade: B

*/
