#include"bits/stdc++.h"
using namespace std;

int main()
{
	vector<string>arr = {"bat","eat","ate","tae","nat","tan"};
	int n = arr.size();
	
	unordered_map<string,vector<string>>maps;
	vector<vector<string>>ans;
	for(auto x : arr)
	{
		string temp = x;
		sort(x.begin(),x.end());
		maps[x].push_back(temp);
	}
	
	for(auto x : maps)
	{
		ans.push_back(x.second);
	}
	
	for(auto i : ans)
	{
		for(auto j : i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}