#include <iostream>

using namespace std;

void p(double x ,double y)
{
	cout<<"Result = "<<x+y<<endl;
}

void d(double x ,double y)
{
	cout<<"Result = "<<x-y<<endl;
}

void m(double x ,double y)
{
	cout<<"Result = "<<x*y<<endl;
}

void div(double x ,double y)
{
	if (y!=0)
	cout<<"Result = "<<x/y<<endl;
	else
	cout<<"Math error"<<endl;
}

int main ()
{
	double num1;
	double num2;
	char op;
	char e;
	    
	while (true)
	{
	    cout << "Enter first number "<<endl;
	    cin>>num1;
	    cout<<"Enter an operator "<<endl;
	    cin>>op;
	    cout << "Enter the second number "<<endl;
	    cin>>num2;
	    if(op=='+')
	        p(num1,num2);
	    else if(op=='-')
	        d(num1,num2);
	    else if(op=='*')
	        m(num1,num2);
	    else if(op=='/')
	        div(num1,num2);
	    else
	        cout<<"Invalid operater "<<endl;
	        
	    cout <<"Would you like to continue?(y/n)"<<endl; 
		cin>>e;
		
		if(e=='n'||e=='N')
		break;   
	}
	cout<<"Thank you for using our program. See you later "<<endl;
	return 0;
}
