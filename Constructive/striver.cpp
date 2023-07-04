#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    int n, i;
    cin >> n;

    while(n>0) {
        cin >> i;
        if (i == 1) {
            cout << "HARD" << endl;
            return 0; 
        }
        n--;
    }    
    cout << "EASY" << endl; 

    return 0;
}
	