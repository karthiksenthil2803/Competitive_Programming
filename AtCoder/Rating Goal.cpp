#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string R, G;
	cin >> R;
	cin >> G;
	
	int r = stoi(R);
	int g = stoi(G);
	
	cout << 2 * g - r << "\n";
	
	return 0;
} 