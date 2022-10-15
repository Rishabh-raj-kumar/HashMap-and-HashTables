#include "bits/stdc++.h"
using namespace std;

int main()
{
	//example pair  = -1,1 -3,3...so on
	//first we will need an array..
	vector<int>arr = {1,3,-1,4,-2,4,-3,2};
	//then we need two array 1.for storing  negative values.. 2.for storing pair values..
	vector<int>vec,ans;
	
	int n = arr.size();
	//then we will need a sorted map..
	map<int,int>mp;
	
	//we will traversing through elements in array..
	for(int i=0;i<n;i++)
	{
		//if number is negative push it in vec array...
		if(arr[i] < 0)
		{
			vec.push_back(arr[i]);
		}
		//else if number is positive push it in map..
		else
		{
			mp[arr[i]]++;
		}
	}

   //we will be sorting the vec array in order...
   sort(vec.begin(),vec.end());
   
   //you can check which  elements are stored in maps....(optional)->you can delete this operation..
	map<int,int>::iterator it;
	for(it = mp.begin();it != mp.end();it++)
	{
		cout<<it -> first<<" "<<it -> second<<endl;
	}
	
	//Then we will be checking if positive of negative number is present or not..
	for(int i=vec.size()-1;i>=0;i--)
	{
		int data = abs(vec[i]);
		//if present then push it in ans vector..
		if(mp[data] > 0)
		{
			ans.push_back(vec[i]);
			ans.push_back(data);
		}
	}
	
	//finaly we will print pair..
	for(auto i : ans)
	{
		cout<<i<<" ";
	}
	return 0;
}