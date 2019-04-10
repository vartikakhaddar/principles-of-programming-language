#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a,b,c;
	cout<<"Enter first string: ";
	cin>>a;
	cout<<"Enter second string: ";
	cin>>b;
	int n,m, k=0, ai=0;
	cout<<"Enter position from where you want \nto add ssecond string to other ";
	cin>>n;
	m= a.length() + b.length();
	for(int i=0;i<m;i++)
	{
		if(i==n-1)
		{
			for(int j=0;j<b.length();j++)
			{
				c[k]=b[j];
				k++;	
			}			
		}
		else
		{
			c[k]=a[ai];
			ai++;
			k++;
		}
		
	}
	cout<<"Joined string is: ";
	for(int i=0;i<m;i++)
	cout<<c[i];
	
}
