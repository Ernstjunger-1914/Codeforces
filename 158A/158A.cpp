#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
using namespace std;
 
int main() {
  fastio;
 
  int n, k, cnt=0;
  int score[52];
  cin>>n>>k;

  for(int i=1; i<n+1; i++) {
    cin>>score[i];
  }
 
  for(int i=1; i<n+1; i++) {
    if(score[k]<=score[i]&&score[i]>0) {
      cnt++;
    }
  }
  cout<<cnt<<"\n";
  
  return 0;
}