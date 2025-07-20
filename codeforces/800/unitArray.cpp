#include<iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int pos = 0, neg = 0, temp, count = 0, tn = n;
    while(tn--){
        cin>>temp;
        if (temp < 0) neg++;
        else pos++;
    }
    if (n == 0) return;

    if (n&1){
        if (pos >= (n+2)/2) {
            if (neg&1) cout<<"1\n";
            else cout<<"0\n";
        } else {
            int targetPos = ((n+2)/2)-pos;
            neg -= targetPos;
            targetPos += ((neg&1)?1:0);
            cout<<targetPos<<"\n";
        }
    } else {
        if (pos >= n/2){
            if (neg&1) cout<<"1\n";
            else cout<<"0\n";
        } else {
            int targetPos = n/2 - pos;
            neg -= targetPos;
            targetPos += ((neg&1)?1:0);
            cout<<targetPos<<"\n";
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}