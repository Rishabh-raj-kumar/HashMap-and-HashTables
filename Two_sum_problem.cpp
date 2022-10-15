#include "bits/stdc++.h"
using namespace std;

int main()
{
	//first we need a array..
	vector<int>arr = {3,2,3};
	int n = arr.size();
	
	//sum we have to find..
	int target = 6;
	
	//we will create an empty vector for storing index of sum...
	
	vector<int>vec;
	//we will also map the index of number...
	
	unordered_map<int,int>mapps;
	
	for(int i = 0;i<n;i++)
	{
		//we will be subtracting elements of array from target to check two numbers are equal to sum or not..
		
		int curr = target - arr[i];
		//example : 6-3 = 3.. also 3 is present in map at first...
		
		if(mapps.find(curr) != mapps.end())
		{
			//as that number is present we will insert it in vector..
			
			vec.push_back(mapps[curr]+1);
			vec.push_back(i+1);
			break;
		}
		//if not present we fill the element in mapp..and then check again..
		
		mapps[arr[i]] = i;
	};
	
	//Then we will be printing them which we stored in empty vector...
	for(auto i : vec)
	{
		cout<<i<<" ";
	}
	
	//time complexity -> O(n)...
	return 0;
}