
//--------------------Generate Parenthesis, Like n=2 => (()),()()--------------------------
#include<iostream>
using namespace std;
int n = 3;

void generateParenthesis(char *ch, int i, int open, int close)
{
	//base case
	if(i==2*n)
	{
		ch[i] = '\0';
		cout<<ch<<endl;
		return;
	}
	
	//Add '(' brackets
	if(open < n)
	{
		ch[i] = '(';
		generateParenthesis(ch,i+1,open+1,close);
	}
	
	//Add ')' brackets
	if(close < open)
	{
		ch[i] = ')';
		generateParenthesis(ch, i+1, open, close+1);
	}
}
int main()
{
	char ch[100];
	
	generateParenthesis(ch,0,0,0);

return 0;

}

