#include<bits/stdc++.h>
#define ioboost ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main() {
  ioboost;

  long long n, m, a;
  cin>>n>>m>>a;
  long long x=n/a, y=m/a;
  
  if(n%a!=0) {
    x++;
  }

  if(m%a!=0) {
    y++;
  }
  cout<<x*y<<"\n";

  return 0;
}