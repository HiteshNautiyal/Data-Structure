
//Question: Sum of Array Using Recursion?

#include<iostream>
using namespace std;

int solve2(int *arr, int i, int n) // Iterate ke through Iterate krna 
{
	if(i==n)
	return 0;
	
	return arr[i]+solve2(arr, i+1, n);
}

int solve(int *arr, int n)
{
	if(n==0)
	return 0;
	
	return arr[0]+solve(arr+1, n-1);
}
int main()
{
  int n;
  cin>>n;

//  int arr[] = {1,2,3,4,5};
//  int n = sizeof(arr)/sizeof(int);
 int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  cout<<solve(arr,n)<<endl;
  
  cout<<solve2(arr,0,n);
return 0;

}

