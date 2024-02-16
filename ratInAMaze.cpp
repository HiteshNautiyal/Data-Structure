#include<iostream>
using namespace std;


bool RatInAMaze(char maze[][5], int i, int j, int n, int m , int sol[][10])
{
	//base case
	if(i==n-1 and j==m-1)
	{
		sol[i][j] = 1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		
		return true; // path mil gya
	}
	
	//recursive case
	
	//janha pe khadA HU woh shi hai
	sol[i][j] = 1;
	
	//Go right
	if(j+1<m and maze[i][j+1]!='x')
	{
		bool right_ans = RatInAMaze(maze,i,j+1,n,m,sol);
		if(right_ans == true)
		return true;
		
	}
	
	//Go down
	if(i+1<n and maze[i+1][j]!='x')
	{
		bool down_ans = RatInAMaze(maze,i+1,j,n,m,sol);
		if(down_ans == true)
		return true;
	}
	
	sol[i][j] = 0; // BackTracking
	return false;
}
int main()
{
	char maze[][5] = { "0000", "00xx", "0000", "xx00"
	};
	
	int sol[10][10] = {0};//Output array
	
	RatInAMaze(maze,0,0,4,4,sol);
}
