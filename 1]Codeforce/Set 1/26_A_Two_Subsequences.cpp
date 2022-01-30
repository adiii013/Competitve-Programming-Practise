#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int linearSearch(string s,char a,int len){
    
    rep(0,len){
        if(s[i]==a) return i;
    }
    return 0;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  int len = s.length();
  string temp = s,ans,str1,str2;
  sort(all(temp));
  char a = temp[0];
  int index = linearSearch(s,a,len);
  if(index==0){
    ans = s.substr(1,len);
  }
  else{
     str1 = s.substr(0,index);
     str2 = s.substr(index+1,len);
     ans = str1+str2;
  }
  cout<<a<<" "<<ans<<endl;
}

return 0;
}