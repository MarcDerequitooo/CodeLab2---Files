#include<iostream>
using namespace std;
main()
{
int x = 0,y = 0,z;
cout<<"Enter purchase price: "<<x;
cin>>x;
cout<<"Enter sale price: "<<y;
cin>>y;

if(x < y){
	cout<<"You gained profit"<<endl;
	z = y - x;
	cout<<"The amount of proft is "<<z<<endl;
}
if(x > y){
	cout<<"You have loss"<<endl;
	z = y - x;
	cout<<"The amount of loss is "<<z<<endl;
}

}

