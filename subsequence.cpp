#include<iostream>
using namespace std;

void Subsequence(char *a, int i, char *out, int j)
{
	//base case
	if(a[i] == '\0')
	{
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	
	//1. ith element ko ignore kro
	Subsequence(a, i+1, out, j);
	
	//2. ith element ko add kro
	out[j] = a[i];
	Subsequence(a, i+1, out, j+1);
	
}

void Permutation(char *a, int i)
{
	//base case
	if(a[i] == '\0')
	{
		cout<<a<<endl;
		return;
	}
	
	for(int j=i; a[j]!='\0';j++)
	{
		swap(a[i],a[j]);//recursion call se phle wala swap
		Permutation(a,i+1);
		swap(a[i],a[j]);//Backtracking
	}
}
int main()
{
	char a[] = "abc";
	
//	char out[100];
//	
//	Subsequence(a,0,out,0);
	Permutation(a,0);
	
	
    
    
return 0;

}
 
