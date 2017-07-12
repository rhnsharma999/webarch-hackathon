#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,x;
    long long int sum = 0;
    cin >>n;
    for(int i = 0; i< n;i++){
        cin >>x;
        sum += x;
    }
    cout <<sum;
    return 0;
}
