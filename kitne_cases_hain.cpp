#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define rojka ll n;cin>>n;ll a[n];for(int i=0;i<n;i++){cin>>a[i];} 
 
ll maxmax(ll a,ll b,ll c){ 
    return max(a,max(b,c)); 
} 
ll minmin(ll a,ll b,ll c){ 
    return min(a,min(b,c)); 
} 
ll gcd(ll a, ll b){ 
    return __gcd(a,b); 
} 
 
int main(){ 
  ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    ll kitne_cases_hain; 
    kitne_cases_hain=1; 
    cin>>kitne_cases_hain; 
    while(kitne_cases_hain--){ 
        ll n; 
        cin>>n; 
        ll a[n]; 
        for(int i=0;i<n;i++){ 
            cin>>a[i]; 
        } 
        vector <ll> v; 
        v.push_back(1); 
        for(int i=1;i<n-1;i++){ 
            if(a[i]>a[i-1] && a[i]>a[i+1]){ 
                v.push_back(i+1); 
            } 
        } 
        v.push_back(n); 
        ll ans=0; 
        ll cnt; 
        for(int i=1;i<v.size();i++){ 
            cnt=v[i]-v[i-1]+1; 
            ans+=(cnt*(cnt+1))/2; 
        } 
        ans-=(v.size()-2); 
        cout<<ans<<"\n"; 
    } 
  return 0; 
}
