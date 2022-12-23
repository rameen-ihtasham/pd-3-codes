#include <iostream>
using namespace std;
main()
{
int time;
int final;
int initial;
int acceleration;
cout << " Enter initial velocity : ";
cin >>initial;
cout << " Enter acceleration : ";
cin >> acceleration;
cout << " Enter time : ";
cin >> time;
final = (acceleration*time) + initial;
cout << " final velocity = ";
cout <<final;
}