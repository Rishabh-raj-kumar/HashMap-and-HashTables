#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int>arr = {139,50,79,153,231,193,213,415,514};
	map<int,vector<int>>maps;
	
    sort(arr.begin(),arr.end());
	for(auto x : arr)
	{
		maps[x / 100].push_back(x);
	}
	
	vector<vector<int>>ans;
	for(auto x : maps)
	{
		ans.push_back(x.second);
	}
	

	for(auto it = maps.begin();it != maps.end();it++)
	{
		cout<<it -> first<<" -- > ";
		for(auto it2 = it ->second.begin();it2 != it ->second.end();it2++)
		{
			cout<<*(it2)<<" ";
		}
		cout<<endl;
	}
	return 0;
}