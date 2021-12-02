#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
using namespace std;
 
int main() {
  fastio;
 
  string str;
  int n;
  cin>>n;
 
  for(int i=0; i<n; i++) {
    cin>>str;
    int leng=str.length();
 
    if(leng>10) {
      int cnt=leng-2;
      string begin=str.substr(0, 1), end=str.substr(leng-1, leng);
 
      cout<<begin<<cnt<<end<<"\n";
    } else {
      cout<<str<<"\n";
    }
  }
  return 0;
}