#include <iostream>
using namespace std;
main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float percentage;
cout << "Enter your name : ";
cin >> name;
cout << "Enter subject 1 marks : ";
cin >>subject1;
cout << "Enter subject 2 marks : ";
cin >>subject2;
cout << "Enter subject 3 marks : ";
cin >>subject3;
cout << "Enter subject 4 marks : ";
cin >>subject4;
cout << "Enter subject 5 marks : ";
cin >>subject5;
percentage = ((subject1+subject2+subject3+subject4+subject5)/500)*100;
cout << "percentage = ";
cout << percentage;
}
