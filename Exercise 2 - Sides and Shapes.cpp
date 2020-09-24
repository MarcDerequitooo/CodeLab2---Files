#include<iostream>
using namespace std;
main()
{
int x;
cout<<"Enter the number of the sides of the shape: "<<x;
cin>>x;

if(x == 3){
	cout<<"Triangle has 3 sides"<<endl;
}

if(x == 4){
	cout<<"Square has 4 sides"<<endl;
}

if(x == 5){
	cout<<"Pentagon has 5 sides"<<endl;
}

if(x == 6){
	cout<<"Hexagon has 6 sides"<<endl;
}

if(x == 7){
	cout<<"Heptagon has 7 sides"<<endl;
}

if(x == 8){
	cout<<"Octagon has 8 sides"<<endl;
}

if(x == 9){
	cout<<"Nonagon has 9 sides"<<endl;
}

if(x == 10){
	cout<<"Decangon has 10 sides"<<endl;
}

if(x < 3 || x > 10){
	cout<<"The number you entered is INVALID"<<endl;
}
return 0;
}

