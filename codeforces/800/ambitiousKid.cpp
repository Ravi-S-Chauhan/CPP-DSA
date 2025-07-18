#include<iostream>

using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>temp;
        ans = min(abs(temp),ans);
    }
    cout<<ans;
    return 0;
}