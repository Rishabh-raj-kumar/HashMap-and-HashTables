#include "bits/stdc++.h"
using namespace std;

int main()
{
	//we will be creating an Unordered set to store key...
	unordered_set<int>sets;
	
	vector<int>arr = {1,2,3,4,4,5,4};
	vector<int>arr2 = {4,5,4,4};
	
	//first we will inserting array elements in set..
	for(int i=0;i<arr.size();i++)
	{
		sets.insert(arr[i]);
	}
	
	//then we will be checking both array element same or not..
	int count = 0; //to store count of intersected elements...
	for(int i=0;i<arr2.size();i++)
	{
		int key = arr2[i];
		if(sets.find(key) != sets.end())
		{
			count++;
			//we dont want to increment count on same number next time...so delete that number..
			sets.erase(key);
		}
	}
	
	cout<<count<<endl;
	return 0;
}