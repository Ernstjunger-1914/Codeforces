#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
using namespace std;
 
int main() {
  fastio;
 
  int w;
  cin>>w;
 
  if(w%2==0) {
    if(w==2) {
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
    }
  } else {
    cout<<"NO"<<endl;
  }
  
  return 0;
}