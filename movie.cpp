#include <iostream>
using namespace std;
main()
{
string name;
int child_price;
int adult_price;
int child_sold;
int adult_sold;
int total;
float donation_percentage;
float donation;
int net ;
cout <<" Enter movie name : ";
cin >> name ;
cout <<" Enter child ticket price : ";
cin >> child_price;
cout << "Enter adult ticket price : ";
cin >> adult_price;
cout <<"Enter number of child tickets sold : ";
cin >>child_sold;
cout <<"Enter number of adult tickets sold : ";
cin >>adult_sold;
cout << " Enter the percentage of donation : ";
cin >> donation_percentage;
total = (child_price * child_sold) + (adult_price * adult_sold);
donation = (total) * (donation_percentage / 100);
cout << donation << endl;
net = total - donation;
cout << "Total amount generated : ";
cout <<total<<endl;
cout << "Amount after dontion : ";
cout << net;
}
