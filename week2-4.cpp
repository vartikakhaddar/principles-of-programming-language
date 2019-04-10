#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int t;
cout<<"enter no of testcases"<<endl;
cin>>t;
while(t--)
{
	char n;
	cout<<endl<<"Enter a character ";
	n= getche();
	
	if(n>=65 && n<=90)
	cout<<endl<<"You entered a capital character";
	
	if(n>=97 && n<=122)
	cout<<endl<<"You entered a lowercase character";
	
	if(n>=48 && n<=57)
	cout<<endl<<"You entered a digit";
	
	if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127)
	cout<<endl<<"You entered a special character";
	
}
	return 0;
	
}

