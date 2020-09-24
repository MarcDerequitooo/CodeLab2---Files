#include<iostream>
using namespace std;
main()
{
int Fahrenheit = 0,Celsius=0;
int Temp;

cout<<"Enter Which Temperature You want to Convert"<<endl;
cout<<"(1) to Convert Fahrenheit to Celsius"<<endl;
cout<<"(2) to Convert Celvius to Fahrenheit"<<endl;
cin>>Temp;

switch (Temp){
case 1:
cout<<"Enter Fahrenheit: "<<Fahrenheit;
cin>>Fahrenheit;

Celsius =((Fahrenheit-32)*0.5556);
cout<<"Converted Fahrenheit to Celsius is "<<Celsius<<endl;
break;

case 2:
cout<<"Enter Celsius "<<Celsius;
cin>>Celsius;

Fahrenheit =(Celsius*1.8)+32;
cout<<"Converted Celsius to Fahrenheit is "<<Fahrenheit;
break;
 }
cin.get();
return 0; 
}

