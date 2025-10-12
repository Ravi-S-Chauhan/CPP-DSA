#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include <numeric>
#include <cmath>
using namespace std;

void tc() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if (a[0]==1) a[0]++;
    cout<<a[0]<<" ";
    for(int i=1;i<n;i++){
        while(a[i]==1 || (a[i]%a[i-1])==0) a[i]++;
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}