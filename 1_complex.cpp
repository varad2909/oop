#include<iostream>
using namespace std;

class complex
{
	int x;
	int y;

public:
	complex()
	{
		x=y=0;
	}

	complex operator +(complex c2)
	{
		complex c3;
		c3.x = x + c2.x;
		c3.y = y + c2.y;
		return c3;
	}

	complex operator *(complex c2)
	{
		complex c3;
		c3.x = (x*c2.x)-(y*c2.y);
		c3.y = (x*c2.y)+(y*c2.x);
		return c3;
	}

	friend istream & operator >>(istream&input, complex & c)
	{
		cout<<"\nEnter real part of complex number: ";
		input>>c.x;
		cout<<"\nEnter imaginary part of complex number: ";
		input>>c.y;
	}

	friend ostream & operator <<(ostream &output, complex & c)
	{
		output<<c.x<<" + "<<c.y<<"i"<<endl;		
	}
};

int main()
{
	complex c1,c2,c3;
	/*cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<"Complex Number is(Addition): "<<c3;
	c3=c1*c2;	
	cout<<"Complex Number is(Multiplication): "<<c3;*/

	int ch;
	do
	{

	cout<<"\n________MENU________";
	cout<<"\n1.Default Constructor";
	cout<<"\n2.Input Complex Number";
	cout<<"\n3.Display Complex Number";
	cout<<"\n4.Addition of Complex NUmber";
	cout<<"\n5.Multiplication of Complex NUmber";
	cout<<"\n6.Exit";

    cout<<"\nEnter Choice: ";
	cin>>ch;
	
	switch(ch)
	{
	case 1:
			cout<<"\nIn Default Constructor";
			cout<<c1;
			break; 
	case 2: 
			cout<<"\nEnter 1st Complex Number: ";
			cin>>c1;
			cout<<"\nEnter 2nd Complex Number: ";
			cin>>c2;
			break;
	case 3: 
			cout<<"\n1st Complex Number: ";
			cout<<c1;
			cout<<"\n2nd Complex Number: ";
			cout<<c2;
			break;
	case 4:
			c3=c1+c2;
			cout<<"Complex Number is(Addition): "<<c3;
			break;
	case 5:
 			c3=c1*c2;	
			cout<<"Complex Number is(Multiplication): "<<c3;
			break;
	case 6:
			cout<<"\nExit!\nEnd of Program";
		
	}

	}while(ch!=6);
	 return 0;
	
}




























