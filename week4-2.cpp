
#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j;
    cout << "Enter number of rows ";
    cin >> r;
    cout << "Enter number of columns  ";
    cin >> c;
    int a[r][c], b[r][c], sum[r][c], mult[r][c] ;  
    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
            cin >> a[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
            cin >> b[i][j];
       }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }
	for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            for(int k = 0; k < c; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    cout << endl << "Multiplication Matrix: " << endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c-1)
            cout << endl;
        }
    return 0;
}

