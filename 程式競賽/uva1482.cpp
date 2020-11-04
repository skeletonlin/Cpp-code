#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

long long SG(int x)
{
	if(x & 1)
		return SG(x/2);
	return x/2;
}

int main()
{
	IOS
	int N;
	cin >> N;
	long long ans, t;
	while(N--)
	{
		ans = 0;
		int ti;
		cin >> ti;
		while(ti--)
		{
			cin >> t;
			ans ^= SG(t);
		}
		if(ans == 0) cout << "NO\n";
		else cout << "YES\n";
	}

}