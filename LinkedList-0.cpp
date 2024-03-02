#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
		
		node(int value)
		{
			data = value;
			next = NULL;
		}
};

//--------------------------------INSERTION AT BEGINNING------------------------------------------
void InsertAtFront(node* &head,node*& tail, int d)
{
	if(head == NULL)
	{
		node* n = new node(d);
		head = tail = n;
	}
	else
	{
		node *n = new node(d);
		n->next = head;
		head = n;
	}
}
//-------------------------------INSERTION AT ENDING-----------------------------
void InsertAtEnd(node*& head, node*&tail, int d)
{
	if(head == NULL)
	{
		node *n = new node(d);
		head = tail = n;
	}
	else
	{
		node*n= new node(d);
		tail->next = n;
		tail = n;
	}
}
//----------------------INSERTION AT ANY POSITION----------------------------------
void InsertAtMiddle(node*&head, node*&tail, int d, int pos)
{
	node *temp = head;
	
	for(int i=1;i<=pos-1;i++)
	temp = temp->next;
	
	node *n = new node(d);
	n->next = temp->next;
	temp->next = n;
}

//--------------------------------LENGTH OF LL----------------------------------
int LengthLL(node *&head)
{
	node* temp =head;
	int ans = 0;
	while(temp != NULL)
	{
		ans++;
		temp = temp->next;
	}
	return ans;
	
}
//-------------------------------DELETE AT FRONT----------------------------
void DeleteFirst(node*&head, node*&tail)
{
	if(head==NULL)
	{
		return;
	}
	else if(head->next == NULL)
	{
		delete head;
		head = tail = NULL;
	}
	else
	{
		node *t = head;
		head = head->next;
		delete t;
	}
}

//---------------------------------DELETE AT LAST----------------------------------
void DeleteEnd(node *&head, node*&tail)
{
	if(!head)
	return;
	else if(!head->next)
	{
		delete head;
		head= tail = NULL;
	}
	else
	{
		node *t = head;
		while(t->next != tail)
		{
			t = t->next;
		}
		delete tail;
		t->next = NULL;
		tail = t;
		
	}
}
//--------------------------------DELETE AT ANY POSITION--------------------------------
void DeleteMiddle(node *&head, node*&tail, int pos)
{
	node *t = head;
	for(int i=1;i<=pos-1;i++)
	{
		t = t->next;
	}
	node *n = t->next;
	t->next = n->next;
	delete n;
}

//----------------------------REVERSE LL USING ITERATIVE APPROACH---------------------------
void ReverseLL(node *&head, node*&tail)
{
	node *curr = head;
	node *prev = NULL;
	
	while(curr != NULL)
	{
		node *n = curr->next;
		curr->next = prev;
		prev = curr;
		curr = n; 
	}
	swap(head, tail);
}
//------------------------------TRAVERSE IN  A LL-------------------------------
void PrintLL(node *&head)
{
	node*temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

//------------------------------REVERSE LL USING RECURSION------------------------------
void Helper(node*curr, node*prev)
{
	//base case
	if(curr==NULL)
	return;
	
	node *n = curr->next;
	curr->next = prev;
	
	Helper(n,curr);
}
void ReverseRec(node *&head, node *&tail)
{
	Helper(head, NULL);
	swap(head, tail);
}


int main()
{
	node *head, *tail;
	
	//pointers mei kabhi bhi garbage value nhi rkhte
	head = tail = NULL;
	
	InsertAtStart(head, tail, 1);
	InsertAtStart(head, tail, 2);
	InsertAtStart(head, tail, 3);
	
//	PrintLL(head);
	cout<<endl;
	
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 5);
	InsertAtEnd(head, tail, 6);
	
//	PrintLL(head);
	cout<<endl;
	
	InsertAtMiddle(head, tail, 7, 3);
	
	cout<<"Before Deletion: "<<endl;
	PrintLL(head);
	cout<<endl;
	
	cout<<endl;
	
//	cout<<"Length of a Linked List is: "<<LengthLL(head)<<endl;
    
//	cout<<"After Delete First Node: "<<endl;
//	DeleteFront(head, tail);
//	PrintLL(head);
//	cout<<endl;  
//	
//	cout<<"After Delete Last Node: "<<endl;
//	DeleteLast(head, tail);
//	PrintLL(head);
//	cout<<endl;  
//	
//	cout<<"After Delete Middle element: "<<endl;
//	DeleteMiddle(head, tail, 2);
//	PrintLL(head);
//	cout<<endl;
	
//	ReverseLL(head, tail);
//	PrintLL(head);
	cout<<endl;
	ReverseRec(head, tail);
	PrintLL(head);
	cout<<endl;
	
	
	
	return 0;
}
