#include<iostream>
using namespace std;

class publication
{
  string title;
  float price;

public:
	void getdata()
	{
		cout<<"\nEnter Title: ";
 		cin>>title;
		cout<<"\nEnter Price: ";
		cin>>price;
	}
	
	void display()
	{
		cout<<"\nTitle: "<<title;
		cout<<"\nPrice: "<<price;	
	}
};

class book : public publication
{
  int page_count;
public:
	void getdata()
	{
		try
		{		
		publication::getdata();
		cout<<"\nEnter No. of pages: ";
		cin>>page_count;
                if(page_count<=0);
			throw page_count;
                }
		catch(...)
                {
			cout<<"\nInvalid Page Count...Try Again!!";
		}
	}   
        
	void display()
	{
	 publication::display();
         cout<<"\nNo. of Pages: "<<page_count;
	}

};

class tape : public publication
{
  float play_time;
public:
	void getdata()
	{
		try
		{		
		publication::getdata();
		cout<<"\nEnter Play Time: ";
		cin>>play_time;
                if(play_time<=0);
			throw play_time;
                }
		catch(...)
                {
			//cout<<"\nInvalid Play Time...Try Again!!";
   			//play_time=0;
		}
	}   
        
	void display()
	{
	 publication::display();
         cout<<"\nPlay Time : "<<play_time;
         cout<<"\n";
	}

};


int main()
{
  book b1;
  tape t1;
  cout<<"\nBook Class";
  b1.getdata();
  b1.display();
  cout<<"\nTape Class";
  t1.getdata();
  t1.display();

  return 0;

}











