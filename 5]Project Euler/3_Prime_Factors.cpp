#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

void PrimeFactors(ll n){
    while(n%2==0){
        cout<<2<<" ";
        n = n/2;
    }
    for(ll i = 3;i<=sqrt(n);i = i+2){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>2) cout<<n<<endl;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll t;cin>>t;

PrimeFactors(t);

return 0;
}