#include <bits/stdc++.h>
using namespace std;

#define COL = 10000;

int main()
{
	int L,G;
	while(cin >> L >> G)
	{
		if(L == 0 && G == 0) break;
		int xr[G][2];
		for(int i = 0; i < G; i++)
		{
			cin >> xr[i][0] >> xr[i][1];
		}
		qsort(xr, G, sizeof(*xr),
        [](const void *arg1, const void *arg2)->int
        {
            int const *lhs = static_cast<int const*>(arg1);
            int const *rhs = static_cast<int const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });
        int dist[G][2];
        for(int i = 0; i < G; i++)
        {
        	dist[i][0] = xr[i][0] - xr[i][1];
        	dist[i][1] = xr[i][0] + xr[i][1];
        }
        qsort(dist, G, sizeof(*dist),
        [](const void *arg1, const void *arg2)->int
        {
            int const *lhs = static_cast<int const*>(arg1);
            int const *rhs = static_cast<int const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        });
        int left = 0;
        int right;
        int ans = 0;
        int con = 0;
        while(left < L)
        {
        	right = left;
        	while(left >= dist[con][0] && con < G)
        	{
        		if(dist[con][1] > right)
        		{
        			right = dist[con][1];
        		}
        		con++;
        	}
        	if(left == right) break;
        	left = right;
        	ans++;
        }
        if(left < L) cout << "-1" << endl;
        else cout << G-ans <<endl;


	}
}