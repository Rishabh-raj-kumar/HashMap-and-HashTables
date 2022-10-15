#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int>arr = {1,2,3,4,3,4,1};
	unordered_map<int,int>mapps;
	
	for(int i=0;i<arr.size();i++)
	{
		mapps[arr[i]]++;
	}
	
	for(int i=0;i<arr.size();i++)
	{
		int key = arr[i];
		auto it = mapps.find(key);
		if(it -> second == 1){
			cout<<"Non Repeating Element is : "<<it -> first<<endl;
			break;
		}
	}
	return 0;
}