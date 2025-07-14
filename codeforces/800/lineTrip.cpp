#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,mx = INT_MIN;
        cin>>n>>x;
        int prev;
        cin>>prev;
        mx = max(mx,prev);
        for(int i=1;i<n;i++){
            int temp;
            cin>>temp;
            mx = max(mx,temp-prev);
            prev = temp;
        }
        mx = max(mx,2*(x-prev));
        cout<<mx<<endl;
    }
}