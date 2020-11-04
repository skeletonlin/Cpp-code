#include <bits/stdc++.h>
using namespace std;

int main()
{
	int mod[] = {1,1,4,4,2,1,1,4,4,2};
	vector<int> cnt[10];
	cnt[0].push_back(0);

	cnt[1].push_back(1);

	cnt[2].push_back(6);
	cnt[2].push_back(2);
	cnt[2].push_back(4);
	cnt[2].push_back(8);

	cnt[3].push_back(1);
	cnt[3].push_back(3);
	cnt[3].push_back(9);
	cnt[3].push_back(7);

	cnt[4].push_back(6);
	cnt[4].push_back(4);

	cnt[5].push_back(5);
	
	cnt[6].push_back(6);

	cnt[7].push_back(1);
	cnt[7].push_back(7);
	cnt[7].push_back(9);
	cnt[7].push_back(3);
	
	cnt[8].push_back(6);
	cnt[8].push_back(8);
	cnt[8].push_back(4);
	cnt[8].push_back(2);
	
	cnt[9].push_back(1);
	cnt[9].push_back(9);

	string m,n;
	while(cin >> m >> n)
	{
		if(m == "0" && n == "0") break;
		if(n == "0") cout << "1" << endl;
		else
		{
			int m_last = m[m.length()-1]-'0';
			int n_now = 0,n_len = n.length();

			for(int i = 0; i < n_len; i++)
			{
				n_now = n_now*10 + n[i]-'0';
				n_now %= mod[m_last];
			}
			cout << cnt[m_last][n_now] << endl;
		}
	}


}