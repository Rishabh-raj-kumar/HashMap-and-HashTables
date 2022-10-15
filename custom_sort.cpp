#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str = "abcd";
	map<char,int>maps;
	
	for(int i=0;i<str.length();i++)
	{
		maps[str[i]]++;
	}
	vector<string>ans;
	string order = "cba";
	for(int i=0;i<order.length();i++)
	{
	   if(maps.find(order[i]) != maps.end())
	   {
	   	auto temp = maps.find(order[i]);
	   	int count = temp -> second;
	   	string s(count,order[i]);
	   	  ans.push_back(s);
	   	  maps.erase(order[i]);
		}	
	}
	
	for(auto x : maps)
	{
		string s(x.second,x.first);
		ans.push_back(s);
	}
	
	for(auto i : ans)
	{
		cout<<i<<" ";
	}
	return 0;
	
}