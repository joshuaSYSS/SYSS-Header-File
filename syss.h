typedef long long ll;
typedef long double ld;
typedef int long long;
typedef vector<ll> vl;
typedef set<ll> sl;
typedef map<ll, ll> ml;
typedef struct{
    ld x, y;
} Point;
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define up(initial, limit, step) for(auto i = (initial);i < (limit);i += (step))
#define down(initial, limit, step) for(auto i = (initial);i >= (limit);i -= (step))
#define endl '\n'
#define getline cin.ignore();getline
ll sum(ll n, ll m){
    while (m) cnt=n&m, n^=m, m=cnt<<1;
    return n;
}
ld Sqrt(const ld& n)
{
   static union {ll i; ld f;} u;
   u.i = 0x2035AD0C + (*(ll*)&n >> 1);
   return n / u.f + u.f * 0.25d;
}
ll factorial(ll n)
{
  int iteration, factorial=1;
  for(iteration=1; iteration<=n; iteration++)
  {
      factorial*=iteration;
  }
  return factorial;
}
ld dist(Point p1, Point p2){
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
ll fPow(ll base, ll power, ll MOD = 1) {
    ll result = 1;
    while(power > 0) {
        if(power&1 result = (result*base) % MOD;
        base = (base * base) % MOD, power >>= 1;
    }
    return result;
}
void V001(){
    cout << "Hello, World!\n";
}
void V002(){
    string s;getline(cin, s);
    cout << s << '\n';
}
