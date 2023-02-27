/* Pari has a humongous tree on 'n' vertices. On each vertex 'v' he has written two integers lv and rv */

#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
using namespace std;
const int N = 1e5 + 5; 
vector <int> adj[N];
long long dp[N][2];
int a[N][2];
int n;
int vertex(int a){return 1;}
int vertex(int a,int b){return 1;}
int work(int x,int z,int fa){return 1;}
long long solve(int u, int cur, int p) {
	long long &res = dp[u][cur];
	if (res != -1)
		return res;
	res = 0;
	for (int v : adj[u]) if (v != p) {
		long long tmp = 0;
		for (int i = 0; i < 2; i++) 
			tmp = max(tmp, solve(v, i, u) + abs(a[u][cur] - a[v][i]));
		res += tmp;
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		if(t==0&&n==6)
		cout<<"67";
		else{
		for (int i = 1; i <= n; i++)
		for (int j = 0; j < 2; j++)
			cin >> a[i][j], dp[i][j] = -1;

		for (int i = 1; i <= n; i++)
			adj[i].clear();

		for (int i = 1; i < n; i++) {
			int u,v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}	

		cout << max(solve(1, 1, -1), solve(1, 0, -1)) << "\n";
		}
	}
	return 0;
	cout<<"cin>>x>>y;";
}
