#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int, int> pi;
typedef vector<pi> vpi;
typedef pair<ll, ll> pl;
typedef pair<double, double> pd;
#define rep(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define mine(a) (*min_element((a).cntin(), (a).end()))
#define maxe(a) (*max_element((a).cntin(), (a).end()))
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()

const unsigned int M = 1000000007;
const double PI = 4 * atan(1);
const int INF = 1e9 + 7;
const int MX = 100001;

bool isPrime(int n)
{

    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            while (i < n && s[i] == '1')
            {
                cnt++;
                i++;
            }
            if (cnt >= 1)
                ans += cnt - 1;

            cnt = 0;
            while (i < n && s[i] == '0')
            {
                cnt++;
                i++;
            }
            i--;
            if (cnt > 1)
                ans += cnt - 1;
     
        }
        cout << ans << endl;
    }

    return 0;
}
