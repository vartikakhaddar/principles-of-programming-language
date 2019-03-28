
#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int a[size];
	int e=0, o=0, p=0, n=0;
	for(int i=0;i<size;i++)
	{cin>>a[i];
	if(a[i]>0)
	p++;
	if(a[i]<0)
	n++;
	if(a[i]%2==0)
	e++;
	if(a[i]%2!=0)
	o++;
	}
	cout<<endl<<"No. of even no: "<<e<<endl;
	cout<<"No. of odd no: "<<o<<endl;
	cout<<"No. of negative no: "<<n<<endl;
	cout<<"No. of positive no: "<<p<<endl;
	return 0;
}

