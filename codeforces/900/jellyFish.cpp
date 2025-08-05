#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include <numeric>
using namespace std;

void tc() {
    int n,a,b;
    cin >> a >> b >> n;
    long long t = b;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if (temp>=a){
            t += min(a-1,temp-1);
        } else {
            t += temp;
        }
    }
    cout<<t<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}