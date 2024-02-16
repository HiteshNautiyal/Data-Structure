
/*--------------------------------------------------------------------------------------
// Question: Evaluates x^n ?

#include<iostream>
using namespace std;

int power(int x, int n)
{
	//base case
	if(n==1)
	return x;
	
	//recursive case
	return x*power(x,n-1);
}
int main()
{
  int x,n;
  cin>>x>>n;
  
  cout<<power(x,n);
return 0;

}
----------------------------------------------------------------------------------------*/


//Question: 2.	Given an integer say - 2048, print "two zero four eight" using recursion ?

#include<iostream>
using namespace std;

string str[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void intToString(int n)
{
	//base case
	if(n==0)
	return;
	
	int last_digit = n%10;
	
	intToString(n/10);
	
	cout<<str[last_digit]<<" ";
}
int main()
{
	int n;
	cin>>n;
	
	intToString(n);
	
	
}

