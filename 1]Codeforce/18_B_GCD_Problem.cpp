#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
   int a;cin>>a;
   if(a%2==0) cout<<a-3<<" 2 1\n";
   else{
       a--;a/=2;
       if(a%2==0){
           cout<<a+1<<" "<<a-1<<" 1\n";
       }
       else{
           cout<<a+2<<" "<<a-2<<" 1\n";
       }
   }
}

return 0;
}