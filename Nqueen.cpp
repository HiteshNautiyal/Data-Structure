#include<iostream>
using namespace std;


bool safe(int maze[][100], int r, int c, int n)
{
	//1. column mai rani nhi honio chAHIYE
	for(int i=0;i<r;i++)
	{
		if(maze[i][c] == 1)
		return false;
	}
	
	
	
	int copy_r = r, copy_c = c;
	
	//2. upper right diagonal
	while(r>=0 and c<n)
	{
		if(maze[r--][c++] == 1)
		return false;
	}
	
	r = copy_r, c = copy_c;
	//3. Upper left diagonal
	while(r>=0 and c>=0)
	{
		if(maze[r--][c--] == 1)
		return false;
	}
	
	return true;
	
}
bool NQueen(int maze[][100], int r, int n)
{
	//base case
	if(r==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				maze[i][j] == 1? cout<<" Q " : cout<<" _ ";
			}
			cout<<endl;
		}
		return true;
	}
	
	//recursive case
	
	for(int c=0;c<n;c++)
	{
		if(safe(maze,r,c,n))
		{
			maze[r][c] = 1;
			bool ans = NQueen(maze,r+1,n);
			if(ans == true)
			return true;
			
			maze[r][c] = 0;
		}
	}
	return false;
}
int main()
{
	int maze[100][100] = {0};
	
	int n;
	cin>>n;
	
	NQueen(maze,0,n);

return 0;

}

