#include<iostream>
using namespace std;
main()
{
int money=0,change;
cout<<"Enter you Money: "<<money;
cin>>money;

if(money >= 25){
	cout<<"Continue to buy Computer Game"<<endl;
	change = money-25;
	cout<<"You have successfully purchased the game"<<endl;
	cout<<"Your change is "<<change;
}
else{
	cout<<"You don't have enough money to buy";
}

}

