#pragma once

#include <bits/stdc++.h>
#define int long long

using namespace std;

class Bigint{
private:
    vector<int> A;
public:
    Bigint(string& a){
        for (int i = a.size() - 1; i >= 0; i--){ 
            A.push_back(a[i] - '0');
        }
    }

    vector<int> BigintGetVector();
};

