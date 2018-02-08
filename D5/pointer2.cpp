#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char *s="SANDIP";
	for(int i=strlen(s)-1;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		cout<<s[j];
		cout<<endl;
	}
	return 0;
}
/*
OUTPUT
SANDIP
SANDI
SAND
SAN
SA
S

*/
