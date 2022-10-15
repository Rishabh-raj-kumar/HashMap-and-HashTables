#include "bits/stdc++.h"
using namespace std;

int main()
{
	//Time complexity of unordered_map is O(1)..
	   //key,value
	unordered_map<int,int>mapps;
	
	//if both number has same length then we will be using linked list..
	int arr[] = {1,8,4,3,7};
	
	//here we will create hash table...
	for(int i=0;i<5;i++)
	{
		mapps[arr[i]]++;
	}
	
	//we will be finding maximum number in array...
	unordered_map<int,int>::iterator it;
	int mx = 0;
	for(it = mapps.begin();it != mapps.end();it++)
	{
		mx = max(mx,it -> first);
	}
	cout<<mx<<endl;
	
	unordered_map<string,int>info;
	info["Prince"] = 1;
	info["Rahul"] = 2;
	info["Rakul"] = 3;
	info["Maiden"] = 4;
	
	string key = "Rahul";
	if(info.find(key) != info.end())
	{
		cout<<key<<" Found "<<endl;
	}

     info.insert(make_pair("mobni",5));
     info.insert(make_pair("jablin",5));
     //you cant do link this....
//     info.insert("shimla",6);

    unordered_map<string,int>::iterator sit;
	for(sit = info.begin();sit != info.end();sit++)
	{
		cout<<sit -> first<<" "<<sit -> second<<endl;
    }
    
    cout<<info.size()<<endl;
	return 0;
}