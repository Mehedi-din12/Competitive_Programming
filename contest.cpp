//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
//================================================================================================
#define fast_io   ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define nl "\n"
#define pi acos(-1.00)//2.0*acos(0.0)
//================================================================================================
typedef long long int lli;
//================================================================================================
const lli INF = 1e18;
const lli N_INF = -1e18;
const int N=2e7;//10^3=1000=1e3
const double EPS = (double) 1e-9;
const int MOD=10000007;
//================================================================================================


lli gcd(lli a,lli b)
{
  if(b==0) return a;
  return gcd(b,a%b);
}

lli lcm(lli a,lli b)
{
  return a/ gcd(a,b) *b;
}

//================================================================================================

void solve(){
  lli g,l;cin>>g>>l;

  if(l%g==0){
    cout<<g<<" "<<l<<nl;
  }else{
    cout<<-1<<nl;
  }
}

//================================================================================================
void tcType1(){solve();}
void tcType2(){int t;cin>>t;cin.ignore(); while (t--){solve();}}
void tcType3(){int t;cin>>t;for(int i=1;i<=t;++i){cout<<"Case "<<i<<": ";solve();}}
void init(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);freopen("error.txt","w",stderr);
#endif  
}
//================================================================================================

int main(){
  init();
  fast_io;

  //tcType1();
  tcType2();
  //tcType3();

  return 0;
}
