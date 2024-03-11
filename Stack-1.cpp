/**
//---------------------------  Build Stack Using Vector  -----------------------------
#include<iostream>
#include<vector>
using namespace std;

class Stack{
	vector<int> v;
	public:
		void push(int val){
			v.push_back(val);
		}
		void pop()
		{
			v.pop_back();
			
		}
		int top()
		{
			return v[v.size()-1];
			
		}
		bool empty()
		{
			return v.size()==0;	
		}
};
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}

return 0;

}
**/

//---------------------------Build Stack Using Linked List------------------------------
#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
		
		node(int val)
		{
			data = val;
			next = NULL;
		}
};

class Stack{
	node *head;
	public:
		Stack()
		{
			head = NULL;
		}
		void push(int d)
		{ 
			node *n = new node(d);
			n->next = head;
			head = n;
			
		}
		
		void pop()
		{
			if(!head)
			return;
			
			node *n = head;
			head = head->next;
			delete n;
			
		}
		
		int top()
		{
			return head->data;
			
		}
		bool empty()
		{ 
			return head == NULL;
			
		}
};
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	
	while(!s.empty())
	{
		cout<<s.top()<<" -> ";
		s.pop();
	}
	cout<<"NULL";
	
	return 0;
}

