#include <iostream>
using namespace std;
main()
{
int num;
int mod1;
int mod2;
int mod3;
int mod4;
int mod5;
int div1;
int div2;
int div3;
int div4;
int div5;
int sum;
cout << "enter 5 numbers : ";
cin >> num;
mod1 = num%10;
div1 = num/10;
mod2= div1 %10;
div2 =div1 /10;
mod3=div2 %10;
div3=div2 /10;
mod4=div3 %10;
div4=div3 /10;
mod5=div4%10;
div5=div4/10;
sum= mod1+mod2+mod3+mod4+mod5;
cout <<"sum= ";
cout <<sum;
}

