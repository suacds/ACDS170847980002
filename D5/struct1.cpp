#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[4];

int main()
{
    cout << "Enter students information : " << endl;

    // storing information
    for(int i = 0; i < 4; ++i)
    {
        s[i].roll = i+1;
        cout << "For roll number" << s[i].roll << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 4; ++i)
    {
        cout << "\nRoll number: " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}

/*
OUTPUT
Enter students information :
For roll number1,
Enter name: Kane
Enter marks: 79

For roll number2,
Enter name: Will
Enter marks: 67

For roll number3,
Enter name: Smith
Enter marks: 88

For roll number4,
Enter name: Rohan
Enter marks: 96

Displaying Information:

Roll number: 1
Name: Kane
Marks: 79

Roll number: 2
Name: Will
Marks: 67

Roll number: 3
Name: Smith
Marks: 88

Roll number: 4
Name: Rohan
Marks: 96
*/
