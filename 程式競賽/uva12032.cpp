#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
	{
		int t;
		scanf("%d",&t);
		int num[t+1] = {0};
		for(int j = 1;j <= t;j++)
		{
			scanf("%d",&num[j]);
		}
		int ans = num[t]-num[t-1];
		for(int j = t-1;j > 0;--j)
		{
			if(ans < num[j]-num[j-1])
			{
				ans = num[j]-num[j-1];
			}
			else if(ans == num[j]-num[j-1])
			{
				ans = num[j]-num[j-1]+1;
			}
		}
		printf("Case %d: %d\n", i+1,ans);
	}
}