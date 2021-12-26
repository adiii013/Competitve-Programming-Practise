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
  int n;cin>>n;
  string s;cin>>s;
  int a=0,b=0;
  rep(0,n){
      if(s[i]=='1') a++;
      else b++;
  }
  string ans = "";
  rep(0,n){
    if(a>0){
        ans+='1';a--;
    }
    if(b>0){
        ans+='0';b--;
    }
  }    
    string check = "1010";
    
    int c = check.length();
    int res = 0;
    for (int i = 0; i <=  n-c; i++){
        
        int j;
        for (j = 0; j < c; j++)
            if (ans[i+j] != check[j])
                break;
  
        if (j == c) {
           res++;
        }
    }
    cout<<res<<endl;
}

return 0;
}