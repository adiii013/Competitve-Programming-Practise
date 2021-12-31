#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s;cin>>s;

  int found1 = s.find("code");
  int found2 = s.find("chef");
  if(found1>found2)cout<<"WA"<<endl;
  else cout<<"AC"<<endl;
}

return 0;
}