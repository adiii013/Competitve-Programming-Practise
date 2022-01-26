/**
 * @author Aditya Patil
 * @email adidada023@gmail.com
 * @create date 2022-01-26 20:10:46
 * @modify date 2022-01-26 20:10:46
 * @desc [description]
 */
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int cnt2021 = n%2020;
  int cnt2020 = (n-cnt2021)/2020 - cnt2021;
  if(cnt2020>=0 && cnt2020*2020+cnt2021*2021 == n){
      cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;
}

return 0;
}