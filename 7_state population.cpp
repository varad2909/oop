#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
	string state_name;
	int population,n;
	map<string,int>state;
	cout<<"Enter no of states stored in map:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"Enter "<<i+1<<" state name:";
	cin>>state_name;
	cout<<"Enter population:";
	cin>>population;
	state.insert(pair<string,int>(state_name,population));
	}
	map<string,int>::iterator itr;
	cout<<"\tSTATE\tPOPULATION"<<endl;
	cout<<"\t---------------------"<<endl;
	for(itr=state.begin();itr!=state.end();itr++)
	{
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
	}
	
	cout<<"Enter state name: ";
	cin>>state_name;
	itr=state.find(state_name);
	if(itr==state.end())
	{
	cout<<"State was not found in map"<<endl;
	}
	else
	{
	cout<<"state was found in map"<<endl;
	cout<<state_name<<"->"<<population<<endl;
	cout<<"population of "<<state_name<<"state is: "<<state[state_name]<<endl;
	}

 	return 0;
}
