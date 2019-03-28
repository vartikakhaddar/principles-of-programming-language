
#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
void mergeArrays(int arr1[], int arr2[], int n1, 
							int n2, int arr3[]) 
{ 
	int i = 0, j = 0, k = 0; 
	while (i<n1 && j <n2) 
	{ 
		if (arr1[i] < arr2[j]) 
			arr3[k++] = arr1[i++]; 
		else
			arr3[k++] = arr2[j++]; 
	} 
	while (i < n1) 
		arr3[k++] = arr1[i++]; 
	while (j < n2) 
		arr3[k++] = arr2[j++]; 
} 

int main() 
{ 
	int n1,n2;
	cin>>n1>>n2;
	int arr1[n1], arr2[n2];
	for(int i=0;i<n1;i++)
	cin>>arr1[i];
	for(int i=0;i<n2;i++)
	cin>>arr2[i];
	int n3;
	n3=n1+n2;
	int arr3[n1+n2]; 
	mergeArrays(arr1, arr2, n1, n2, arr3);
	sort(arr3, arr3+n3) ;
	cout << "Array after merging" <<endl; 
	for (int i=0; i < n1+n2; i++) 
		cout << arr3[i] << " "; 
	return 0; 
} 

