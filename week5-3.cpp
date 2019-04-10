#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1, str2;
    int flag = 0;
    cout << "Enter the string : ";
    cin>>str1;
    int len = str1.length();
   for(int i=0;i < len ;i++)
   {
        if(str1[i] != str1[len-i-1])
		{
            flag = 1;
            break;
    	}
   }
    if (flag == 1)
        cout << str1 << " is not a palindrome";
    else
        cout << str1 << " is a palindrome";
    return 0;
}
