/*-----------------------------------------------------------------------------------------------------------
//Question:- Multiply two number using recursion?

#include<iostream>
using namespace std;

int solve(int a, int b)
{
	
	if(b==0)
	return 0;
	
	int chotaAns = solve(a, b-1);
	int badaAns = a + chotaAns;   //'a' ko 'b' times add kr rhe hai 
	
	return badaAns;
}

int main()
{
	//4*5=20 or 4+4+4+4+4 = 20
   
   int a,b;
   cin>>a>>b;
   
   cout<<solve(a,b);
return 0;

}
------------------------------------------------------------------------------------------------------------*/
//-----------------------------------Question: Factorial of a Given Number?--------------------- 
#include<iostream>
using namespace std;

int Fact(int n)
{
	//base case
	if(n==1)
	return 1;
	
	//recursive case
	return n*Fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	
	cout<<Fact(n);

return 0;

}


