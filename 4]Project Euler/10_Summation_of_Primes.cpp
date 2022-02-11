#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

void steve(int n){
    ll sum = 0;
    bool isPrime[n+1];
    memset(isPrime,true,sizeof(isPrime));
    for(int p = 2;p*p<=n;p++){
        if(isPrime[p]==true){
        for(int i = p*p;i<=n;i+=p){
            isPrime[i] = false;
        }
      }
    }
    for(int p = 2;p<=n;p++){
        if(isPrime[p]) sum+=p;
    }
    cout<<sum<<endl;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
steve(t);


return 0;
}