#include <bits/stdc++.h>
using namespace std;

int main()
{
	char line[10000];
	bool flag = true;
	
	while(gets(line)) {
		int n = strlen(line);
		for(int i = 0; i<n; i++) {
			if(line[i] == '"'){
				if(flag == true) {
					printf("``");
				} else {
					printf("''");
				}
				flag = !flag;	
			} else {
				printf("%c", line[i]);
			}
		}
		cout << endl;
	}
}