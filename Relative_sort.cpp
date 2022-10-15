#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int>arr = {1,2,3,4,9,6,3,1,1,2,4,8};
	vector<int>arr2 = {1,4,2,3,77,88};
	
	//we need a sorted map for storing key and value..
	map<int,int>maps;
	//we will push value of arr in maps
	for(auto x : arr)
	{
		maps[x]++;
	}
	
	//for storing value in relative sort..
	vector<int>ans;
	//Then we will be checking it arr2..
	for(auto x : arr2)
	{
		//if that value is present in map..
		if(maps.find(x) != maps.end())
		{
			//then we will see how much times that number repeated..
			auto y = maps.find(x);
			int count = y -> second;
			//then we will be creating a vector of key pair value..
			vector<int>vec(count,x);
			//then we will push it in ans array..
			ans.insert(ans.end(),vec.begin(),vec.end());
			//but we have to erase the value that is inserted in ans..so that it cant be repeated..
			maps.erase(x);
		}
	}
	
	//now we will push remaining valye of map in ans array..
	for(auto x : maps)
	{
		auto y = x.first;
		int count = x.second;
		vector<int>vec(count,y);
		ans.insert(ans.end(),vec.begin(),vec.end());
	}
	
	for(auto i : ans)
	{
		cout<<i<<" ";
	}
	return 0;
}