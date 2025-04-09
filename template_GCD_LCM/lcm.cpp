#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(a, a % b);
}

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

int main(){

}