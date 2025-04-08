#include <bits/stdc++.h>
#define int long long

//子集枚举的平替代版

using namespace std;

const int N = 1e5 + 10;

int vis[N], n, k, num[N], ans = 0;

bool isprime(int a){
    int ans = 1;
    if(a == 1 || a == 2){
        ans = 1;
    }
    else if(a > 2){
        for(int i = 2; i * i < a; i++){
            if(a % i == 0){
                ans = 0;
                break;
            }
        }
    }
    return ans;
}

void dfs(int cnt, int sum, int pos){
    if(cnt == k){
        if(isprime(sum)){
            ans++;
        }
        return;
    }

    for(int i = pos + 1; i <= n; i++){
        dfs(cnt + 1, sum + num[i], i);
    }
    //目的是保持升序
}

signed main(){
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }

    for(int i = 1; i <= n; i++){
        vis[i]++;
        dfs(1, num[i], i);
        vis[i]--;
    }

    cout << ans;

    return 0;
}