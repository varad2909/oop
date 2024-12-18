#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class student
{
    int rollno;
    string name;
    float marks;

public:
      void getdata(){
        ofstream ofs;
        ofs.open("student.txt",ios::app);
        if(ofs)
        { 
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter your roll no:";
            cin>>rollno;
            cout<<"Enter your marks:";
            cin>>marks;
            ofs<<name<<"\t"<<rollno<<"\t"<<marks<<endl;
        }
               else  {
            cout<<"ERROR in opening the file"<<endl;
        }
            ofs.close();
         }
         void display()
         {
            ifstream ifs;
            string line;
            if(ifs)
            {
                ifs.open("student.txt",ios::in);
                while(!ifs.eof())
                {
                    getline(ifs,line);
                    cout<<line<<endl;
                  }
               } else
               {
                    cout<<"Error in the file opening"<<endl;
                }
                ifs.close();
                }
};        
int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
    
}           
         
