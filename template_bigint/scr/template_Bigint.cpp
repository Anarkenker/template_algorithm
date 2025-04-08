#include "template_Bigint.h"
#include <bits/stdc++.h>

using namespace std;

Bigint::Bigint(string& a){
    for (int i = a.size() - 1; i >= 0; i--){ 
        A.push_back(a[i] - '0');
    }
}
