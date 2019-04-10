#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a,b;
	cout<<"Enter the string: ";
	cin>>a;
	int n,pos,k=0;
	cout<<"Enter position from where you want \nto delete elements ";
	cin>>pos;
	cout<<"Enter no. of elements you \nwant to delete ";
	cin>>n;
		for(int j=0;j<pos;j++)
		{
			b[k]=a[j];
			k++;
		}
		for(int m=pos+n;m<a.length();m++)
		{
			b[k]=a[m];
			k++;
		}
	cout<<"Cropped string is: ";
	for(int i=0;i<k ;i++)
	cout<<b[i];
	
}
