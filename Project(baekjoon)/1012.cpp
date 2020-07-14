#include<iostream>
#include<vector>
using namespace std;
int t;
int n, m, k;
int y, x;
vector<vector<int>>arr;
vector<vector<bool>>check;// �湮 Ȯ�� �迭

int dir[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };//�����¿�

int DFS(int y, int x) {
	if (x < 0 || y < 0 || y >= n || x >= m) return 0;//�迭ũ�� ������ʰ� 
	if (arr[y][x] == 0 || check[y][x] == true) return 0;//�湮�ߴ��� 1���� 0����
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
		 arr.clear(); check.clear();//�� Ȯ�ι迭 �ʱ�ȭ
		 arr.resize(n, vector<int>(m, 0));//��ũ�� �缳��
		 check.resize(n, vector<bool>(m, 0));//Ȯ�� �迭 �缳��

		 for (int i = 0; i < k; i++) {
 			 cin >> x >> y;
			 arr[y][x] = 1;//������ġ �Է�
			
		}
		 int cnt = 0;//������ �ʱ�ȭ
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