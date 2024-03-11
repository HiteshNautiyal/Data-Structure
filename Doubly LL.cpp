#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
		node *prev;
		
		node(int value)
		{
			data = value;
			next = NULL;
			prev = NULL;
		}
};

void InsertAtFront(node *&head, node*&tail, int d)
{
	if(head == NULL)
	{
		node *n = new node(d);
		head = tail = n;
	}
	else
	{
		node *n = new node(d);
		n -> next = head;
		head -> prev = n;
		head = n;
	}
}

void PrintLL(node *head)
{
	node *temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}
	cout<<"NULL";
}

void InsertAtEnd(node*&head, node*&tail, int d)
{
	if(head == NULL)
	{
		node *n = new node(d);
		head = tail = n;
	}
	else
	{
		node *n = new node(d);
		tail -> next = n;
		n -> prev = tail;
		tail = n;
		
	}
}
void DeleteAtFront(node *&head, node*&tail)
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
		node *n = head;
		head = head->next;
		head->prev = NULL;
		delete n;
		
	}
}

void DeleteAtEnd(node *&head, node *&tail)
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
		node *n = tail;
		n->prev->next = NULL;
		tail = n->prev;
		delete n;
	}
}
int main()
{
	node *head , *tail;
	head = tail = NULL;
	
	InsertAtFront(head, tail, 1);
	InsertAtFront(head, tail, 2);
	InsertAtFront(head, tail, 3);
	
	
	cout<<endl;
	
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 5);
	InsertAtEnd(head, tail, 6);
    
    cout<<endl;
    
    DeleteAtFront(head, tail);
    PrintLL(head);
    cout<<endl;
    
    DeleteAtEnd(head, tail);
    PrintLL(head);
    cout<<endl;
    
    
return 0;

}

