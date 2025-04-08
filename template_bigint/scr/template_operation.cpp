#include <bits/stdc++.h>
#define int long long

using namespace std;

class Bigint{

};

class BigintCalculate{
private:
    Bigint num;
public:

    vector<int> Add(vector<int>& A, vector<int>& B){
        if(A.size() < B.size()) return Add(B, A);

        vector<int> C;
        int t = 0;
        for(int i = 0; i < A.size(); i++){
            t += A[i];
            if(i < B.size()) t += B[i];
            C.push_back(t % 10);
            t /= 10;
        }

        if(t) C.push_back(t);
        return C;
    }


};