#include<iostream>
using namespace std;

void tc(){
    int n,t,k;
    cin>>n;
    k = n-1;
    cin>>t;
    while(k--){
        int temp;
        cin>>temp;
        t ^= temp;
    }
    if (n&1){
        cout<<t<<"\n";
    } else {
        if (t == 0) cout<<"0\n";
        else cout<<"-1\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}