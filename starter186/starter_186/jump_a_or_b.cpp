#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;


void usool()
{
  ll n,m,a,b; cin>>n>>m>>a>>b;
  
  if(a==b){
      if(m == n*a) cout<<"YES"<<endl;
      else
       cout<<"NO"<<endl;
  }
  else if((m-n*b)%(a-b)==0){
      ll f1 = (m-n*b)/a-b;
      ll f2 = n-f1;
      if(f1>=0 && f2>=0) cout<<"YES"<<endl;
      else
       cout<<"NO"<<endl;
  }
  else
   cout<<"NO"<<endl;
  
  

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        usool();
    }
    return 0;
}