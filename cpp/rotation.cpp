#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin >>n >>d;
    int arr[n];
    for(int i = 0; i <n;i++){
      cin >>arr[i];
    }

    int x[n];
    for(int i = 0; i< n;i++){
        x[i] = arr[(d + i)%n];
        cout <<x[i] <<" ";
    }
    return 0;
}
