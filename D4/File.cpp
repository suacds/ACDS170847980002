/* Write a C++ program, which initializes a string variable to the content "The desire to learn should be stronger than the desire to live" and outputs the string to the disk file OUT.TXT. Include all the header files if required.
*/
#include <stdio.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{


  	ofstream file;
  	file.open ("output.txt");
  	file << "\n The desire to learn should be stronger than the desire to live\n";
  	file.close();
	cout<<"\n Check output.txt file\n ";


	return 0;
}


