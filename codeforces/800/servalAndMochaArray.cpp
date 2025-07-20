#include<iostream>
#include<vector>
using namespace std;

long long gcd(long long a, long long b){
    return b?gcd(b,a%b):a;
}

void tc(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (gcd(a[i],a[j])<=2) {flag = true;break;}
        }
        if (flag) break;
    }
    if (flag) cout<<"Yes\n"; else cout<<"No\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}