#include <iostream>
#define m 10
using namespace std;
class stack
{
	int top,item,s[m];
	public:
		stack()
		{
			op =-1;
		}
		void push ();
		void pop();
		void show();
};
void stack ::push()
{
	if (top ==m)
{
		cout<<"stack is full\n";   
}
else
{
		cout<<"Enter the Item:\n";
	    cin >> item ;
		top ++;
		s[top] =item;	
}
}
void stack :: pop()
{
	if (top == -1)
	{
		cout <<"Stack is Empty \n";
	}
	else
	{
	    cout <<s [top]<<" " <<"deleted \n";
	    top --;
    }
}
void stack ::show ()
{
	if (top ==-1)
	{
		cout <<"stack is empty \n";
	}
	else
	{
		cout <<s[i] << endl;
    }
}
int main ()
{
	int ch;
	stack s1;
	do
	{ 
	    cout <<"Enter the choice :\n";
	    cin >>ch;
	    switch (ch)
	    {
		    case 1:
		 	   s1.push ();
		 	   break;
		    case 2:
		       s1.pop();
			   break;
		    case 3:
		       s1.show ();
			   break;
		    case 4:
		       break; 	
        }
    } while (ch!=4);
}
