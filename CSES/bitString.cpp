#include<iostream>

using namespace std;

long long mod = (long long)(1e9+7);

long long p(long long x, long long y){
    if (y == 0 || x == 0) return 1;
    if (y&1){
        return (x%mod * p(x,y-1)%mod)%mod;
    } return p(((x%mod)*(x%mod))%mod,(y%mod / 2LL));
}

int main(){
    long long t;
    cin>>t;
    cout<<p(2LL,t);
    return 0;
}