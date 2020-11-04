#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int peo;
		cin >> peo;
		int rate[peo];
		memset(rate,0,sizeof(rate));
		for(int i = 0; i < peo; i++)
		{
			cin >> rate[i];
		}
		sort(rate,rate+peo);

		int ans = 0;
		if(peo == 1)
		{
			ans = rate[0];
			cout << ans << endl;
			cout << rate[0] << endl;
		}
		else if(peo == 2)
		{
			ans = rate[1];
			cout << ans << endl;
			cout << rate[0] << " " << rate[1] << endl;
		}
		else if(peo == 3)
		{
			for(int i = 0; i < peo; i++)
					ans += rate[i];
			cout << ans << endl;
			cout << rate[0] << " " << rate[1] << endl;
			cout << rate[0] << endl;
			cout << rate[0] << " " << rate[2] << endl;
		}
		else if(peo > 3)
		{
			int t;
			for(t = peo-1; t >= 3; t-=2)
			{
				int temp1 = rate[0]+rate[1]+rate[t]+rate[1]; 
				int temp2 = rate[0]+rate[t]+rate[t-1]+rate[0];
				if(temp1 < temp2) ans += temp1;
				else ans += temp2;
			}
			if(t == 2)
			{
				for(int i = 0; i <= t; i++)
					ans += rate[i];
			}
			else if(t == 1)
			{
				ans += rate[1];
			}
			else if(t == 0)
			{
				ans += rate[0];
			}
			cout << ans << endl;
			int te;
			for(te = peo-1; te >= 3; te-=2)
			{
				int temp1 = rate[0]+rate[1]+rate[te]+rate[1]; 
				int temp2 = rate[0]+rate[te]+rate[te-1]+rate[0];
				if(temp1 < temp2)
				{
					cout << rate[0] << " " << rate[1] << endl;
					cout << rate[0] << endl;
					cout << rate[te-1] << " " << rate[te] << endl;
					cout << rate[1] << endl;
				}
				else
				{
					cout << rate[0] << " " << rate[te-1] << endl;
					cout << rate[0] << endl;
					cout << rate[0] << " " << rate[te] << endl;
					cout << rate[0] << endl;
				}
			}
			if(t == 2)
			{
				cout << rate[0] << " " << rate[1] << endl;
				cout << rate[0] << endl;
				cout << rate[0] << " " << rate[2] << endl;
			}
			else if(t == 1)
			{
				cout << rate[0] << " " << rate[1] << endl;
			}
			else if(t == 0)
			{
				cout << rate[0] << endl;
			}
		}
		if(n)
		{
			cout << endl;
		}

	}
}