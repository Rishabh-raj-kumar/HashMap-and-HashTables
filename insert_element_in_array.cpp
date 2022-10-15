#include "bits/stdc++.h"
using namespace std;

int main()
{
	int data[] = {1,3,4,5};
	int pos = 2;
	for(int i=0;i<5;i++)
	{
		if(i>=1)
		{
			data[i+1] = pos;
		}
		cout<<data[i]<<" ";
	}
	return 0;
}