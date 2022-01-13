#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

   int tn;
   cin>>tn;

   while(tn--){
      ll a, b;
      cin>>a>>b;

      if(b % 2 == 0){
         if(a % 2 == 0){
            cout<<((b/2) * (a/2))<<endl;
         }else{
            cout<<((b/2) * (a/2 + 1))<<endl;
         }
      }else{
         if(a % 2 == 0){
            cout<<((b/2 + 1) * (a/2))<<endl;
         }else{
            cout<<((b/2 + 1) * (a/2 + 1))<<endl;
         }
      }
   }

   return 0;
}