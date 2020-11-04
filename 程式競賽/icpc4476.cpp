#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
int price[4] ={2, 3, 5, 7};
int power[3] = {100, 9900, 990000};

int T_CWh(int x)
{
	int i, cw = 0;
	for(i = 0; i < 3; i++)
	{
		if(x-power[i]*price[i] >= 0)
		{
			cw += power[i];
			x -= power[i]*price[i];
		}
		else
		{
			cw = cw+(x/price[i]);
			return(cw);
		}
	}
	cw = cw+(x/price[3]);
	return(cw);
}
int topay(int p)
{
	int i, pri = 0;
	for(i = 0; i < 3; i++)
	{
		if(p-power[i] >= 0)
		{
			pri += power[i]*price[i];
			p -= power[i];
		}
		else
		{
			pri = pri+(p*price[i]);
			return(pri);
		}
	}
	pri = pri+(p*price[3]);
	return(pri);
}


int main()
{
	IOS
	int A = 0, B = 0, tCWh, R, L, mid, x, y;
	while(cin >> A >> B)
	{
		if(A == 0 && B == 0) break;
		tCWh = T_CWh(A);
		// cout << T_CWh(A) << "\n";
		R = tCWh;
		L = 0;
		mid = (R+L)/2;
		while(1)
		{
			y = topay(mid);
			x = topay(tCWh-mid);
			if(y-x == B)
			{
				cout << x << "\n";
				break;
			}
			else if(y-x < B)
			{
				L = mid;
				mid = (R+L)/2;
			}
			else if(y-x > B)
			{
				R = mid;
				mid = (R+L)/2;
			}
		}

	}

}