#include "bits/stdc++.h"
using namespace std;

int main()
{
	//the numbers are not repeated in sets.....
	//for example :  1,1,1,2,3,2,4 -> set will insert only 1,2,3,4;
	unordered_set<int>sets;
	
	vector<int>arr = {1,2,3,4,5}; //array1
	vector<int>arr2 = {4,5,6,7}; //array2
	
	//insert Elements from array1 ..
	for(int i=0;i<arr.size();i++)
	{
		sets.insert(arr[i]);
	}
	
	//insert Elements from array2...
	for(int i=0;i<arr2.size();i++)
	{
		sets.insert(arr2[i]);
	}
	
	//we will be Printing the numbers union in two arrays..
	for(auto i : sets)
	{
		cout<<i<<endl;
	}
	
	cout<<"Union of two array : "<<sets.size()<<endl;
	
	//Time complexity : O(n)...
	return 0;
}