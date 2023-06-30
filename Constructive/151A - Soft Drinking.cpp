#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    
	int  n, k, l, c, d, p, nl, np;
    cin>> n>> k>> l>> c>> d>> p>> nl>> np;
    int i=k*l;
    int j=i/nl;
    int m=c*d;
    int l1=p/np;
    int ans=min(j,m);
    ans=min(ans,l1);
    cout<<ans/n;

  return 0;
}