#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sumD(ll n){
    ll temp = n;
    ll sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return __gcd(sum,temp);
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;
while(t--){
  ll n;cin>>n;
  if(sumD(n)!=1) cout<<n<<endl;
  else if(sumD(n+1)!=1) cout<<n+1<<endl;
  else if (sumD(n+2)!=1) cout<<n+2<<endl;
} 
return 0;
}