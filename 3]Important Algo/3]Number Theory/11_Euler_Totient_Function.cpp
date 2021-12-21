#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int phi(unsigned int p){
    unsigned int result = 1;
    for(int i = 2;i<p;i++){
        if(gcd(i,p) == 1){
            result++;
        }
    }
    return result;
}

int main(){
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        cout << "phi("<<i<<") = " << phi(i) << endl;
    }

    return 0;

}