#include<iostream>

using namespace std;

void solve(){
    int x,k;
    cin>>x>>k;
    if (x%k) {
        cout<<"1\n"<<x<<"\n";
    } else {
        int t = 0;
        while((x-t)%k==0 || t%k==0) t++;
        cout<<"2\n";
        cout<<x-t<<" "<<t<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}