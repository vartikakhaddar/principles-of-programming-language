
#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int a[size];
	int f, fcount=0;
	cout<<"enter no to count no of occurances";
	cin>>f;
	for(int i=0;i<size;i++)
	{cin>>a[i];
	if(a[i]==f)
	fcount++;
}
cout<<"count is :"<<fcount;
return 0;}
