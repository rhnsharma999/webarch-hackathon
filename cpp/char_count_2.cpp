#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin >>s;
    int arr[27] = {0};
   for(int i = 0; i< s.length();i++){
       int index = s[i] - 'a';   //generate index for each character.
      arr[index]++;
   }
   for(int i = 'a'; i<='z';i++){
       int index = i - 'a';
       if(arr[index] != 0){
           cout <<(char)i <<" " <<arr[index] <<endl;
       }
   }
}
