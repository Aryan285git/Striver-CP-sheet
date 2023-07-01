#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    
	int arr[5][5];
    int m,n=0;
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		cin>>arr[i][j];
    		if(arr[i][j]==1)
    		{
    			m=i;n=j;
    		}
    	}
    }
    		int sum=abs(m-2)+abs(n-2);
    		cout<<sum<<endl;
  return 0;
}