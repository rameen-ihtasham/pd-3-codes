#include <iostream>
using namespace std;
main()
{
int matric ;
int inter;
int ecat;
string name;
float permatric;
float perinter;
float perecat;
float w_inter;
float w_matric;
float w_ecat;
float aggregate;
cout <<"Enter your name: ";
cin >> name;
cout << "Enter you matric marks: ";
cin >>matric;
cout << "Enter you intermediate marks: ";
cin >>inter;
cout << "Enter you ECAT marks: ";
cin >>ecat;
permatric = (matric/1100.0)*100;
w_matric = permatric*10/100;
perinter = (inter/550.0)*100;
w_inter = perinter*40/100;
perecat = (ecat/400.0)*100;
w_ecat =perecat*50/100;
aggregate = (w_matric)+(w_inter)+(w_ecat);
cout << "your aggregate is : " <<aggregate;
}