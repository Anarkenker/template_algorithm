#include <bits/stdc++.h>

using namespace std;

bool check(int num){

}

int BinarySearch(int l, int r){
    
    while(l <= r){
        int mid = l + r >> 1;
        if(check(mid)) l = mid + 1;
        else r = mid - 1;
    }

    return r;
    //l = r + 1;
    //r 是答案
}

int main(){

}
