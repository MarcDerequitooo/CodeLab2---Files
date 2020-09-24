#include<iostream>
using namespace std;
main()
{

int usb = 6, money = 50;
int change, TotalUSB;
TotalUSB = money/usb;
cout<<"She bought "<<TotalUSB<<" USB sticks"<<endl;
change = money-usb*TotalUSB;
cout<<"Her change is "<<change;

}

