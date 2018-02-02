#include <cstring>
#include <iostream>
#include <string>
#include <locale>

using namespace std;


void reverseStr(string &str)
{
   	int n = str.length();
 	for (int i=0; i<n/2; i++)
       	swap(str[i], str[n-i-1]);
}

int main()
{
 	char str1[]="Smartphone";
	char str2[]= "Accessories";



 	cout<<"\n01 STRING LENGHT\n";
	cout<<"\n Given String : "<<str1;
   	cout << "\nwithout null character: " << std::strlen(str1) << '\n'
             << "with null character: " << sizeof str1 << '\n';

	string str = "laptop";
	cout<<"\n02 STRING REVERSE \n"<<"\nGiven String :"<<str;

	reverseStr(str);
  	cout <<"\nREVERSE :" <<str<<"\n\n";

	cout<<"\n03 STRING CONCATENATE  \n";
	cout<<"\n "<<strcat(str1,str2)<<"\n\n";

	cout<<"\n04 STRING COMPARE  \n";
	int res = strcmp(str1, str2);

	if (res==0)
        cout<<"Strings are equal";
	else
        cout<<"Strings are unequal";

	cout<<"\n strcmp() Result is:  "<<res<<"\n";

	cout<<"\n05 STRING UPPER/LOWER  \n";
	std::locale loc;
  	std::string str4="maze\n";
  	for (std::string::size_type i=0; i<str.length(); ++i)
	{
    	std::cout<< std::toupper(str4[i],loc);
	}

  	for (std::string::size_type j=0; j<str.length(); ++j)
	{
	std::cout<<std::tolower(str4[j],loc);
	}

	return 0;

}
