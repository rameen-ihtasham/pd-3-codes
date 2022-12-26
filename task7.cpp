#include <iostream>
using namespace std;
main()
{
double mb;
double bit;
double kb;
double b;
cout<<"Enter bits : ";
cin >>bit;
b= bit/8;
cout << bit;
cout<<" is equal to ";
cout << b ;
cout <<" bytes"<<endl;
kb= b/1024;
cout << bit;
cout<<" is equal to ";
cout << kb ;
cout << " kilobytes" <<endl;
mb= kb/1024;
cout << bit;
cout<<" is equal to ";
cout << mb ;
cout << " megabytes" <<endl;
}
