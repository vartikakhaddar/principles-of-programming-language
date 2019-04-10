#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	string word;
	cout<<"enter word";
	cin>>word;
int  count=0;
int pos=-1;
	for(int i=0;i<s.length();i++)
	{int flag=0;
		if(s[i]==word[0] && s[i-1]==' ')
		{	
			int k=i;
			for(int j=0;j<word.length();j++)
			{
				if(word[j]!=s[k])
				{
				flag=1;
				break;
				}
				k++;
			}
			if(flag==0)
			{	
				pos=k-word.length()+1;
				break;
			}
			
		}
	
	}
	if(pos!=-1)
	cout<<" "<<pos;
	else
	cout<<"1";
}
