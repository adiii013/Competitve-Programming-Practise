#include<iostream>
#include<vector> 
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,b,x,y;cin>>n>>b>>x>>y;
        vector<long long> v;
        long long sum = 0;
        for(int i = 0;i<n;i++){
            if(sum+x<=b) sum+=x;
            else sum-= y;
            v.push_back(sum);
        }
        long long res=0;
        for (auto c = v.begin(); c != v.end(); ++c) {
            res+=*c;
        }
        cout<<res<<"\n";
}
}