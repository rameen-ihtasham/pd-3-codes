#include <iostream>
using namespace std;
main()
{
int size;
int price;
int area;
float cost_perpound;
float cost_perfeet;
cout << "Enter bag size in pounds : ";
cin >>size;
cout << "Enter cost of the bag : ";
cin >>price;
cout << "Enter area covered by each bag in square feet : ";
cin >> area;
cost_perpound = price/size;
cost_perfeet = price/area;
cout << " Cost of fertilizer per pound = ";
cout << cost_perpound <<endl;
cout <<" Cost of fertilizing the area per square feet : ";
cout << cost_perfeet;
}