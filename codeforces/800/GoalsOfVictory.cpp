#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int total = 0;
        for(int i=1;i<n;i++){
            int temp;
            cin>>temp;
            total += (-1)*temp;
        }
        cout<<total<<endl;
    }
}