#include<iostream>
using namespace std;
main()
{
 string name,hometown;
 double age;
 
 cout<<"State your Information in this order: \nFull name, Hometown, and Age"<<endl;
 
 getline(cin,name);
 getline(cin,hometown);
 scanf("%d",&age);

 printf("Full Name: %s \n",name.c_str());
 printf("Hometown: %s \n",hometown.c_str());
 printf("Age: %d \n",age);
 
 printf(" My name is %s,",name.c_str());
 printf(" I'm from %s, and",hometown.c_str());
 printf(" I'm %d years old",age);
 return 0;
}

