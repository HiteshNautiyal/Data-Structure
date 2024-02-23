
/* --------------------------------------Question:- Count ways to reach Nth Stairs-------------------------------------------------

#include<iostream>
using namespace std;

int nStairs(int n, int k)
{
	//base case
	if(n==0)
	return 1;//if u are in ground stairs so means this is count as '1' stairs 
	
	if(n<0)
	return 0;
	
	//recursive case
	int ans = 0;
	
	for(int i=1;i<=k;i++)
	{
		ans += nStairs(n-i,k);
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;//Total number of stairs
	
	int k;
	cin>>k;//At max 'k' steps
	
	cout<<nStairs(n,k);
	
	

return 0;

}
-----------------------------------------------------------------------------------------------------------------*/


#include<iostream>
using namespace std;


int ChessElephant(int n, int m)
{
	//base case
	if(n==0 and m==0)
	return 1;
	
	if(n<0 or m<0)
	return 0;
	
	int ans = 0;
	for(int k=0;k<n;k++)
	{
		ans += ChessElephant(k,m);
	}
	
	for(int k=0;k<m;k++)
	{
		ans += ChessElephant(n,k);
	}
	
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	cout<<ChessElephant(n,m);
	
	return 0;
}

