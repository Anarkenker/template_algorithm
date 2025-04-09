#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}

//求最大公约数

int main(){
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    return 0;
}