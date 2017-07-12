#include <bits/stdc++.h>
using namespace std;


void solve(string s){
    stack<char> my;    //pre-defined implementation of stack, no need to implement your own.

    int flag = 0;
    for(int i = 0; i < s.size() ;i++) //you can use s.length() also
    {
        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            my.push(s[i]);
        }
        else if(my.empty() && (i != s.size() - 1)){
            flag = 1;
            break;
        }
        else if(my.top() == '[' && s[i] == ']'){
            my.pop();
        }
        else if(my.top() == '(' && s[i] == ')'){
            my.pop();
        }
        else if(my.top() == '{' && s[i] == '}'){
            my.pop();
        }
    }
    if(my.empty() && flag != 1){
        cout <<"YES\n";
    }
    else{
        cout <<"NO\n";
    }
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
