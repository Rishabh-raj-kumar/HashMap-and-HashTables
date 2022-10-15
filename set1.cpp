#include "bits/stdc++.h"
using namespace std;

int main()
{
	unordered_set<int>set;
	set.insert(10);
	set.insert(20);
	set.insert(30);
	set.insert(40);
	
	unordered_set<int>::iterator it;
	for(auto it = set.begin(); it!= set.end();it++)
	{
		cout<<*(it)<<endl;
	}
	
	cout<<"Number of Element : "<<set.size()<<endl;
	
	int key  = 20;
	if(set.find(key) != set.end())
	{
		cout<<"Key found"<<endl;
	}
	else
	{
		cout<<"Key not found"<<endl;
	}
	
	int delete_key = 10;
	set.erase(delete_key);
	
	//as you can see size is decremented and that number is deleted...
	cout<<"New size of sets : "<<set.size()<<endl;
	
	if(set.count(20))
	{
		cout<<"True Number is Present..."<<endl;
	}
	else
	{
		cout<<"false Number is not present.."<<endl;
	}
	return 0;
}