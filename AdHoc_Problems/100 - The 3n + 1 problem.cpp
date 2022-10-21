#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, a, b;

while(scanf("%d %d", &i, &j) == 2)
{	
	if(i < j) {
		a = i;
		b = j;
	} else {
		a = j;
		b = i;
	}
	
	int Max = INT_MIN;
	
	while(a <= b) 
	{
		int n = a, cnt = 1;
		while(n != 1)
		{
			if(n%2 == 0)
				n /= 2;
			else
				n = 3 * n + 1;
			cnt++;
		}	
		Max = max(Max, cnt);
		a++;
	}
	
	if(i < j)
		cout << i << " " << j << " " << Max << endl;
	else
		cout << i << " " << j << " " << Max << endl;
}
	return 0;
}