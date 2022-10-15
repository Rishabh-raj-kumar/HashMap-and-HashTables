#include "bits/stdc++.h"
using namespace std;

int main()
{
	//we will be seeing who had got max vote in election and whose name is short..
	unordered_map<string,int>mapps;
	vector<string>arr = {"rohu","sohu","motu","belu","motu","zypu","rohu","motu"};
	int n = arr.size();
	
	//first craete a hash table of all politician and thier vote..
	for(int i=0;i<n;i++)
	{
		mapps[arr[i]]++;
	}
	
	
	unordered_map<string,int>::iterator it;
	//we will be needed a en empty string for storing short name and empty integer for storing maximum vote..
	string name = "";
	int mx = 0;
	for(it = mapps.begin();it != mapps.end();it++)
	{	
		string key = it -> first;
		int val = it -> second;
		
		//find the maximum vote in map....
		if(val > mx)
		{
			mx= val;
			name = key;
		}
		//if vote is equal to maximum...
		else if(val == mx)
		{
			//then find the shortest name...
			if(key < name)
			{
				name = key;
			}
		}
	}
	//after getting that politician name and vote we will be pushing it to vector..
	vector<string>ans;
	ans.push_back(name);
	//convert vote to string for storing it in string vector...
	string temp = to_string(mx);
	ans.push_back(temp);
	
	//finally print them..
	for(auto i : ans)
	{
		cout<<i<<endl;
	}
	return 0;
}