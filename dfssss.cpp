#include<bits/stdc++.h>
int n,m,s,t; 
string a[500001]; 
map<pair<int,int>,bool> vis; 
void dfs(int x,int y) { 
   if(x<1||y<1||x>n||y>m) return; 
   if(vis[{x,y}]||a[x][y-1]=='#') return; 
   t=max(t,x);vis[{x,y}]=true; 
   dfs(x-1,y);dfs(x+1,y);dfs(x,y-1);dfs(x,y+1); 
} 
void solve() { 
   vis.clear();t=s=0; 
   cin >> n >> m; 
   for(int i=1;i<=n;++i) 
      cin >> a[i]; 
   if(n==1) { 
      for(int i=0;i<m;++i) 
         if(a[1][i]=='#') { 
            puts("1"); 
            return; 
         } 
      puts("0"); 
      return; 
   } 
   dfs(1,1); 
   while(!vis[{n,m}]) { 
      s++; 
      if(t==n) break; 
      for(int i=1;i<=m;++i) 
         a[t+1][i-1]='.'; 
      for(int i=1;i<=m;++i) 
         vis[{t+1,i}]=false; 
      dfs(t+1,1); 
   } 
   cout << s << endl; 
} 
signed main() { 
   int T;cin >> T; 
   while(T--) solve(); 
}
