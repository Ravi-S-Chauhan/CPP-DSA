#include<iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    n--;
    int mx = INT_MAX;
    bool flag = false;
    while(n--){
        int temp;
        cin>>temp;
        if (prev > temp) flag = true;
        else mx = min(mx,temp-prev);
        prev = temp;
    }

    if (flag) {
        cout<<0<<endl;
    } else {
        cout<<mx/2 + 1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}