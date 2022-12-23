#include <iostream>
using namespace std;
main()
{
float veg_price;
float fruit_price;
int veg_kgs;
int fruit_kgs;
float total;
float in_rps;
float value=0.515;
cout << "Enter the price of vegetables : ";
cin >> veg_price;
cout << "Enter the price of fruits : " ;
cin >> fruit_price;
cout <<"Enter total vegetables(in kgs) : ";
cin >>veg_kgs;
cout <<"Enter total fruits(in kgs) : ";
cin >> fruit_kgs;
total = (veg_price * veg_kgs) + (fruit_price * fruit_kgs);
in_rps = total /1.94;
cout << "Total(in Rps) : ";
cout << in_rps;
}