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
				count++;
				flag=1;
			}
		}
	
	}
	cout<<count;
}
