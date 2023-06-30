#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif

    char str[100];
	cin>>str;
	for (int i = 0; str[i] != '\0'; i++){
		if (str[i] >= '5' && str[i] <= '9'){
			if (i == 0 && str[i] == '9')	continue;
			str[i] = '0' + '9' - str[i];
		}
	}
	printf("%s\n", str);
  return 0;
}