#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int>arr = {-1,3,4,-3,-1,9};
	//we will create set for mapping 0..
	   unordered_set<int> sets;
    
     int n = arr.size();
    
    //we will create variable for storing sum..
      int currSum = 0;
    for(int i=0;i<n;i++)
    {
    		currSum += arr[i];
    		
    		//if current line gives 0 then print true;
    		if(currSum == 0)
    		{
    			cout<<"True"<<endl;
    			break;
			}
			//else we will check it in sets...
			if(sets.find(currSum) != sets.end())
			{
				cout<<"true"<<endl;
				break;
			}
			//if not found in set then we store another element..
			sets.insert(currSum);
		}
//	}
    
    
	return 0;
}