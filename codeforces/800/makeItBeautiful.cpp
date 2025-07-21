#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void tc(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    swap(a[0],a[n-1]);
    int i=1;
    while(i<n && a[i]==a[0]) i++;
    if (i == n) cout<<"No\n";
    else {
        swap(a[i],a[1]);
        cout<<"Yes\n";
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}