#include<iostream>
#include<math.h> 
 
using namespace std;
 
int main()
{
	float r1,r2,a,b,c,d,imaginary,real;
	cout<<"For Quadratic Equation ax^2+bx+c=0";
	cout<<"\nEnter values of a,b and c:";
	cin>>a>>b>>c;
	
	d=(b*b)-(4*a*c);
	
	if(d>0)
	{
		cout<<"\nTwo real and distinct roots";
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		cout<<"\nRoots are "<<r1<<" and "<<r2;
	}
	else if(d==0)
		{
			cout<<"\nTwo real and equal roots";
			r1=r2=-b/(2*a);
			cout<<"\nRoots are "<<r1<<" and "<<r2;
		}
	else
	   {
			cout<<"\nRoots are complex and imaginary";
			real = -b/(2*a);
            imaginary = sqrt(-d)/(2*a);
        	cout<<"\nRoots are "<<real<<"+"<<imaginary<<"i and "<<real<<"-"<<imaginary<<"i";
		}
 
	return 0;
}
