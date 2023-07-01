#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i%2==0)
                cout<<"#";
            else if(i%4==1&&j==m-1)
                cout<<"#";
            else if(i%4==3&&j==0)
                cout<<"#";
            else
                cout<<".";
        }
        cout<<endl;
    }
    return 0;
}
	