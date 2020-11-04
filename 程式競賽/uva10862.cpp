#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

int check[2005][2005];
int len[2005];
memset(check,0,sizeof(check));
memset(len,0,sizeof(len));
check[0][0] = 1;
check[1][0] = 3;
len[0] = 1;
len[1] = 1;

void mul(int a, int b)
{

}
void sub(int a, int b)
{

}

int main()
{
	IOS
	for(int i = 0; i < 2000; i++)
	{
		
	}
	int N;
	while(cin >> N && N)
	{
		int k = N-1;
		for(int i = len[k]; i >= 0; i--)
			cout << check[k][i];
		cout << "\n";
	}
}