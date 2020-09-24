#include<iostream>
using namespace std;
main()
{
int currentTime = 3;

if(currentTime <= 12){
	cout<<"Good Morning User! ";
}
if(currentTime >= 12){
	cout<<"Good Afternoon User !";
}
if(currentTime >= 18){
	cout<<"Good Evening User !";
}
if(currentTime >= 21){
	cout<<"Good Night User !";	
}
if(currentTime >= 25, currentTime < 0){
	cout<<"Time is Invalid";
}
return 0;
}

