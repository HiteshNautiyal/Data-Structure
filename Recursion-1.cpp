// Question: Check if Array is Sorted or not Using Recursion?


#include<iostream>
using namespace std;

bool solve(int *arr, int n)
{
	//base case
	if(n==0 or n==1)//if array has empty or 1 element
	return true;
	
	bool subProblem = solve(arr+1, n-1);//recursive case 
	
	if(arr[0]<=arr[1] and subProblem==true)
	return true;
	else
	return false;
}
int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<solve(arr,n);
}
