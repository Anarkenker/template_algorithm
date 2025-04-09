#include <bits/stdc++.h>
#define int long long


using namespace std;

int quickpow(int a, int b, int p){
    int ans = 1;
    while(b){
        if(b & 1){
            ans = ans * a % p;
        }
        a = a * a % p;
        b >>= 1;
    }
    return ans;
}

signed main(){
    int a, b, p;
    cin >> a >> b >> p;
    int ans = quickpow(a, b, p);
    cout << a << "^" << b << " mod " << p << "=" << ans;
    return 0;
}