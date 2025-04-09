#pragma once

#include <bits/stdc++.h>
#include "template_Bigint.h"

using namespace std;

class BigintCalculate{
private:
    
public:

    BigintCalculate(Bigint& A, Bigint& B){

    }

    vector<int> add(std::vector<int> &A, std::vector<int> &B) {
        if (A.size() < B.size()) return add(B, A);
        std::vector<int> C;
        int t = 0;
        for (int i = 0; i < A.size(); i++) {
            t += A[i];
            if (i < B.size()) t += B[i];
            C.push_back(t % 10);
            t /= 10;
        }
        if (t) C.push_back(t);
        return C;
    }

    vector<int> sub(std::vector<int> &A, std::vector<int> &B) {
        std::vector<int> C;
        for (int i = 0, t = 0; i < A.size(); i++) {
            t = A[i] - t;
            if (i < B.size()) t -= B[i];
            C.push_back((t + 10) % 10);
            if (t < 0) t = 1;
            else t = 0;
        }
        while (C.size() > 1 && C.back() == 0) C.pop_back();
        return C;
    }

    vector<int> mul(std::vector<int> &A, int b) {
        std::vector<int> C;
        int t = 0;
        for (int i = 0; i < A.size() || t; i++) {
            if (i < A.size()) t += A[i] * b;
            C.push_back(t % 10);
            t /= 10;
        }
        while (C.size() > 1 && C.back() == 0) C.pop_back();
        return C;
    }
};
