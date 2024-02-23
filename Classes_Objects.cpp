#include<iostream>
#include<cstring>
using namespace std;

//Blueprint 
class car{
	private:
	int price;
	public:
		//data members
		char name[100];
		int model;
		
		int seats;
		
//		Default Functions:- yeh wo function hai jo phle se hi hote hai but hum isse apne bnaye gye
// function se replace kr skta hai but fir bh yeh use honge.

		
		//1. Constructor: 
//		1.1 Default Constructor:
		car()
		{
			cout<<"I'm a Default Constructor"<<endl;
		}
		
		//1.2 Parameterized COnstructor
		car(char *n, int m, int p ,int s)
		{
			cout<<"I'm a Parameterized COnstrcutor -1"<<endl;
			strcpy(name, n);
			model = m;
			price= p;
			seats = s;
			
		}
		
		car(char *n, int m, int p)
		{
			cout<<"I'm a Parameterized COnstructor -2"<<endl;
			strcpy(name, n);
			model = m;
			price = p;
		}
		
		//1.3 Copy Constructor : ek object se dusri object ko create krna
		//--- car x = y;
		//---- car x(y);
		
		car(car &Y)
		{
			cout<<"I'm a Copy Constructor"<<endl;
			strcpy(name, Y.name);
			model = Y.model;
			price = Y.price;
			seats = Y.seats;
		}
		
		void operator = (car Y)
		{
			cout<<"Copy constructor"<<endl;
			strcpy(name, Y.name);
			model = Y.model;
			price = Y.price;
			seats = Y.seats;
		}
		
		~car()
		{
			cout<<"delete"<<name<<endl;
		}
		
		void setprice(int p)
		{
			price = p;
		}
		
		int getprice()
		{
			return price;
		}
		//Function
		void print()
		{
			cout<<"name: "<<name<<endl;
			cout<<"model: "<<model<<endl;
			cout<<"Price: "<<price<<endl;
			cout<<"seats: "<<seats<<endl;
		}
};

int main()
{
	car A;//'A' is the object of the class
	
	strcpy(A.name, "BMW");
	
	A.model = 2020;
	A.setprice(100);
	A.seats = 4;
	
	A.print();
	cout<<A.getprice()<<endl;
	
	cout<<"---------------------------------------------------------------"<<endl;
	
	car B;
	strcpy(B.name, "Audi");
	B.model = 2021;
	B.price = 130000;
	B.seats = 3; 
	
	B.print();
	
	cout<<"---------------------------------------------------------------"<<endl;
	
	car C("Suzuki", 1990, 126000, 2);
	C.print();
	
	cout<<"---------------------------------------------------------------"<<endl;
	
	car D("Maruti", 1980, 110000);
	D.print();
	cout<<"---------------------------------------------------------------"<<endl;
    
	car E = A;
	E.print();
	 cout<<"-----------------------------------------"<<endl;
	 
	 B = A;
	 
	 
	 
	 
	 

return 0;

}

