#include <iostream>
using namespace std;

int main()
{

    int aShyam, aRam;

    cout<<"\n \t Enter Age of Shyam : ";
    cin>>aShyam;
    cout<<"\n \t Enter Age of Ram : ";
    cin>>aRam;

    cout << "\n\n\tBefore swapping." << endl;
    cout << "\n\t AgeOfShyam = " << aShyam << ",\t AgeOfRam = " << aRam << endl;

    aShyam = aShyam + aRam;
    aRam = aShyam - aRam;
    aShyam = aShyam - aRam;

    cout << "\n\t After swapping." << endl;
    cout << "\n\t AgeOfShyam = " << aShyam << ", \t AgeOfRam = " << aRam << endl;

    return 0;
}
