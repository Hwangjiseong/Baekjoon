#include<iostream>
#include<vector>
using namespace std;
int t;
int n, m, k;
int y, x;
vector<vector<int>>arr;
vector<vector<bool>>check;// 방문 확인 배열

int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };//상하좌우

int DFS(int y, int x) {
	if (x < 0 || y < 0 || y >= n || x >= m) return 0;//배열크기 벗어나지않게 
	if (arr[y][x] == 0 || check[y][x] == true) return 0;//방문했는지 1인지 0인지
	else {
		check[y][x] = true;
		for (int i = 0; i < 4; i++) {
			DFS(y + dir[i][0], x + dir[i][1]);
		}
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0); cout.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		 cin >> m >> n >> k;
		 arr.clear(); check.clear();//맵 확인배열 초기화
		 arr.resize(n, vector<int>(m, 0));//맵크기 재설정
		 check.resize(n, vector<bool>(m, 0));//확인 배열 재설정

		 for (int i = 0; i < k; i++) {
 			 cin >> x >> y;
			 arr[y][x] = 1;//배추위치 입력
			
		}
		 int cnt = 0;//지렁이 초기화
		 for (int i = 0; i < n; i++) {
			 for (int j = 0; j < m; j++) {
				 if (arr[i][j] == 1&& check[i][j] == false) {
					 DFS(i,j);
					 cnt++;
				}
			 }
		}
		 cout << cnt << endl;
	}
	return 0;
}