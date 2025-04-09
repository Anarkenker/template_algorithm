#include <bits/stdc++.h>

//P1443
#define int long long

using namespace std;

const int N = 1000;

int vis[N][N], zoux[8] = {1, 1, 2, 2, -1, -1, -2, -2}, zouy[8] = {2, -2, 1, -1, 2, -2, 1, -1};
int n, m, x, y;

void bfs(int sx, int sy){
    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = 0;
    while(!q.empty()){
        auto [px, py] = q.front();
        q.pop();
        for(int i = 0; i < 8; i++){
            int nx, ny;
            nx = px + zoux[i];
            ny = py + zouy[i];
            if(nx >= 1 && nx <= n && ny >= 1 && ny <= m){
                if(vis[nx][ny] != -1){
                    continue;
                }           
                else{
                    vis[nx][ny] = vis[px][py] + 1;
                    q.push({nx, ny});
                }    
            }
        }
    }
}

signed main(){

    cin >> n >> m >> x >> y;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            vis[i][j] = -1;
        }
    }

    bfs(x, y);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << vis[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}