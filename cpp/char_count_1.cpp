#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;  //this is the STL string, much more easier to work with
    cin >>s;
    char c;
    cin >>c;
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == c){
            count++;
        }
    }
    cout <<count;
    return 0;
}
