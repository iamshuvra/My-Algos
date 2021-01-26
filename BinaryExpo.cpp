#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define ext exit(0)
#define fast ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define in_file freopen("input.txt", "r", stdin)
#define out_file freopen("output.txt", "w", stdout)
#define newl printf("\n")
#define nl '\n'
#define sci(x) scanf("%d",&(x))
#define scll(x) scanf("%lld",&(x))
#define sci2(x,y) scanf("%d %d",&(x),&(y))
#define pr printf
#define forr(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define fora(i,n) for(int (i)=0; (i) < (n); (i)++)
#define F first
#define S second
#define mset0(x) memset((x), 0, sizeof((x)));
#define mset1(x) memset((x), -1, sizeof((x)));
#define bs binary_search
#define pi 3.14159265358979323846D
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) __lcm(x,y)
#define fact(x) factorial(x)
#define sieve(x) normal_sieve(x)
#define bsieve(x) bitwise_sieve(x)
#define bprime(x) !Chk(x)
#define runtime() cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n"
#define pqmin(x) priority_queue<x, vector<x>, greater<x> >
#define pqmax(x) priority_queue<x>
#define sortd(x) sort(all(x), greater<int>())
#define vi vector<int>
#define pii pair<int,int>
#define mpii map<int,int>
#define elif else if
#define intmx INT_MAX

string removeChar(string str,char c)
{
    str.erase(remove(str.begin(), str.end(), c), str.end());
    return str;
}
ll nCr(int n, int r)
{
    int f1 = r, f2 = n-r;
    if(f2 > f1) swap(f2,f1);
    ll result = 1;
    for(int i = 1; i <= f2; i++)
    {
        result *= (i+f1);
        result /= i;
    }
    return result;
}
ll nPr(int n, int r, ll mod = 0)
{
    ll result = 1;
    for(int i = n-r+1; i <= n; i++) {result *= i; if(mod) result %= mod;}
    return result;
}
ll factorial(int n, ll modulo = 0)
{
    if(n == 0) return 1;
    if(modulo) return (n*factorial(n-1))%modulo;
    else return n*factorial(n-1);
}


///***  Main Code Starts From Here ***


int main(){
    fast;
    in_file;
    out_file;

    ll x, y, res=1, m=0;
    cin>>x>>y>>m;

    x= x%m;

    while (y > 0)
        {
            if (y % 2 == 1){
                res = (res*x)%m;
            }

            y = y/2.0;
            x = (x*x)%m;

        }
        cout<<res<<endl;

}
