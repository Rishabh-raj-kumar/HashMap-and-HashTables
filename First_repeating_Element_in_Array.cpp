#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int>arr = {-1,0,7,8,-1,0,2,0};
	unordered_map<int,int>mapps;
	
	for(int i=0;i<arr.size();i++)
	{
		mapps[arr[i]]++;
	}
	
	for(int i=0;i<arr.size();i++)
	{ 
		int key = arr[i];
		auto it = mapps.find(key);
		if(it -> second > 1)
		{
			cout<<"First repeating Element : "<<it -> first<<endl;
			break;
		}
	}
	return 0;
}