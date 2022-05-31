typedef long long ll;
typedef int long long;
typedef vector<ll> vl;
typedef set<ll> sl;
ll sum(ll n, ll m){
    while (m) cnt=n&m, n^=m, m=cnt<<1;
    return n;
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
