#include "bits/stdc++.h"

using namespace std;

//bool a[1004][1004];
//int V;
//
//int main()
//{
//	for (int i = 0; i < V; ++i)
//	{
//		for (int j = 0; j < V; ++j)
//		{
//			if (a[i][j])
//
//			{
//		
//			}
//		}
//	}
//}
//int V;
//vector<int> adj[1004];
//int main()
//{
//	
//
//	adj[1].push_back(2);
//
//	for (int i = 0; i < V; ++i)
//	{
//		for (int there : adj[i]);
//	}
//	
//}
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//
//int a[1004][1004];
//
//int main()
//{
//	for (int i = 0; i < 4; ++i)
//	{
//		int ny = dy[i];
//		int nx = dx[i];
//		if (ny < 0 || ny >= 1000 || nx < 0 || nx >= 1000) continue;
//		
//			cout << ny << " : " << nx << "\n";
//		
//	}
//	return 0;
//}
//vector<int> adj[1004];
//
//int main()
//{
//	adj[1].push_back(2);
//	adj[1].push_back(3);
//
//	for (int there : adj[1])
//	{
//		cout << there << " ";
//	}
//
//	return 0;
//}
//int visited[104];
//int adj[104][104];
//void dfs(int here)
//{
//	visited[here] = 1;
//
//	for (int there : adj[here])
//	{
//		if (visited[there])continue;
//		dfs(there);
//	}
////}
//void dfs(int here)
//{
//	if (visited[here])
//	{
//		return;
//	}
//	visited[here] = 1;
//	for (int there : adj[here])
//	{
//		dfs(there);
//		
//	}
//}
//int N, M, K, Y, X, Ny, Nx, Ret, T;
//bool Mapping;
//int A[104][104];
//bool Visited[104][104];
//int Dy[4] = { -1, 0, 1, 0 };
//int Dx[4] = { 0, 1, 0, -1 };
//
//
//
//void DFS(int Y, int X)
//{
//	Visited[Y][X] = 1;
//	for (int i = 0; i < 4; ++i)
//	{
//		Ny = Y + Dy[i];
//		Nx = X + Dx[i];
//
//		if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= M)continue;
//		if(A[Ny][Nx] == 1 && !Visited[Ny][Nx])
//		{
//			DFS(Ny, Nx);
//		}
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> A[i][j];
//		}
//	}
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			if (A[i][j] == 1 && !Visited[i][j])
//			{
//				++Ret;
//				DFS(i, j);
//			}
//		}
//	}
//	
//	cout << Ret << "\n";
//	return 0;
//}
//int dy[4] = { -1, 0, 1, 0 };
//int dx[4] = { 0, 1, 0, -1 };
//int m, n, k, y, x, ret, ny, nx, t;
//int a[104][104];
//bool visited[104][104];
//void dfs(int y, int x) {
//    cout << y << " : " << x << '\n';
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++) {
//        ny = y + dy[i];
//        nx = x + dx[i];
//        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//        if (a[ny][nx] == 1 && !visited[ny][nx]) {
//            dfs(ny, nx);
//        }
//    }
//    return;
//}
//
//int main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (a[i][j] == 1 && !visited[i][j]) {
//                ret++; dfs(i, j);
//            }
//        }
//    }
//    cout << ret << '\n';
//    return 0;
//}

const int max_n = 104;

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int n, m, a[max_n][max_n], visited[max_n][max_n], y, x, sy, sx, ey, ex;
int main()
{
	scanf("%d %d", &n, &m);
	cin >> sy >> sx;
	cin >> ey >> ex;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	queue<pair<int, int>> q;
	visited[sy][sx] = 1;
	q.push({ sy, sx });

	while (q.size())
	{
		tie(y, x) = q.front();
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == 0)
				continue;
			if (visited[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
		}
	}
	printf("%d\n", visited[ey][ex]);
	
}
