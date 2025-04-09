#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 4;
    lower_bound(nums.begin(), nums.end(), target);//第一个出现的位置
    upper_bound(nums.begin(), nums.end(), target);//最后出现的位置
    return 0;
}