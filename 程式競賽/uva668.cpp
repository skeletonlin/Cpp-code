#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int max_work_people[1000];
	memset(max_work_people,0,sizeof(max_work_people));
	max_work_people[0] = 2;
	int people = 3;
	for(int i = 1; i < 1000; i++)
	{
		max_work_people[i] = max_work_people[i-1] + people;
		people++;
	}
	while(n--)
	{
		int in,temp,min,t=1;
		cin >> in;
		min = in - max_work_people[1];
		for(int i = 1;i < 1000;i++)
		{
			temp = in - max_work_people[i];
			if(temp < 0) break;
			else if(temp < min) min = temp;

			t++;
		}
		int ans[t];
		memset(ans,0,sizeof(ans));
		for(int i = 0; i < t; i++)
			ans[i] += i+2;

		for(int i = 0; i < t; i++)
		{
			if(ans[i]+min > ans[t-1])
			{
				ans[i] += min;
				break;
			}
		}
		sort(ans, ans+t);
		printf("%d", ans[0]);
		for(int i = 1; i < t; i++)
		{
			printf(" %d", ans[i]);
		}
		printf("\n");
		if(n)
			printf("\n");
	}
	return 0;
}