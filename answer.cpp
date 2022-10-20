#include<bits/stdc++.h>
using namespace std;
int n,a[102],b[102],answer,Q[102][20001];
void dfs(int idx,int x,int y) {
   if(idx==n+1) {
      answer=max(answer,min(x,y));
      return;
   }
   if(Q[idx][x]>=y&&Q[idx][x]!=0) return;
   Q[idx][x]=y;
   dfs(idx+1,x+a[idx],y);
   dfs(idx+1,x,y+b[idx]);
}
void solve() {
   cin >> n;answer=0;
   for(int i=1;i<=n;++i)
      for(int j=0;j<20001;++j)
         Q[i][j]=0;
   for(int i=1;i<=n;++i) cin >> a[i];
   for(int i=1;i<=n;++i) cin >> b[i];
   dfs(1,0,0);
   cout << answer << endl;
}
signed main() {
   int T;cin >> T;
   while(T--) solve();
}
