#include <bits/stdc++.h> 
using namespace std;
const int INF = 9;
char a[1004][1004];
int n, m, sx, sy, dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 }, ret, y, x;
int fire_check[1004][1004], person_check[1004][1004];
bool in(int a, int b) {
	return 0 <= a && a < n && 0 <= b && b < m;
}
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	queue<pair<int, int>> q;
	cin >> n >> m;
	fill(&fire_check[0][0], &fire_check[0][0] + 1004 * 1004, INF);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'F') {
				fire_check[i][j] = 1; //q.push({ i, j });
			}
			else if (a[i][j] == 'J') {
				sy = i; sx = j;
			}
		}
	}

	q.push({5,4});
	q.push({2,3});

	while (q.size()) {
		tie(y, x) = q.front();
		if (y == 2 && x == 3)
		{
			cout << 'a';
		}
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (!in(ny, nx)) continue;
			if (fire_check[ny][nx] != INF || a[ny][nx] == '#') continue;
			fire_check[ny][nx] = fire_check[y][x] + 1;
			q.push({ ny, nx });
		}
	}
	cout << "\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			printf("%d ", fire_check[i][j]);
		}
		cout << "\n";
	}
}