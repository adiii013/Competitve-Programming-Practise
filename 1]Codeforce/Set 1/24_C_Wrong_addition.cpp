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
  int a,b;cin>>a>>b;
  int num1,num2,num3 = 0,count=1;
  bool flag = true;
  while(flag){
      num1 = b%10;
      b = b/10;
      if(a%10>num1){
         num1 = 10*(b%10)+num1;
          b = b/10;
      }
      num2 = a%10;
      a=a/10;
      num3 = (num1-num2)*count+num3;
      count*=10;
      if(a==0) {
        if(b!=0){
            num3 = (num1-num2)*count+num3;
        }
        else flag = false;
        }
  }
  if(num3>0)
  cout<<num3<<endl;
  else cout<<-1<<endl;
}

return 0;
}