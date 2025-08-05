#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include <numeric>
using namespace std;

void tc() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int t;
    if (n&1) {
        cout<<"4\n1 "<<n<<"\n2 "<<n<<"\n1 "<<"2\n1 "<<"2\n";
    } else {
        cout<<"2\n1 "<<n<<"\n1 "<<n<<"\n";
    }
    
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>>t;
    while(t--) tc();
    return 0;
}