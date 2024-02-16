
// Question: Print Increasing or Decreasing order Using Recursion?

#include<iostream>
using namespace std;

void increasing(int n)
{
	if(n==0)
	return;
	
	
	increasing(n-1);
	cout<<n<<" ";
}
void decreasing(int n)
{
	if(n==0)
	return;
	
	cout<<n<<" ";
	decreasing(n-1);
}
int main()
{
	
	int n;
	cin>>n;
	
	decreasing(n);
	cout<<endl;
	increasing(n);

return 0;

}

