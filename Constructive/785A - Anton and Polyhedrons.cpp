#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    string v[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]=="Tetrahedron")
            sum+=4;
        if(v[i]=="Cube")
            sum+=6;
        if(v[i]=="Octahedron")
            sum+=8;
        if(v[i]=="Dodecahedron")
            sum+=12;
        if(v[i]=="Icosahedron")
            sum+=20;
    }    
    cout<<sum;
    return 0;
}
	