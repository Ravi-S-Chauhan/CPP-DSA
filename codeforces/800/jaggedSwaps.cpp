#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool isValid = true, isPoss = false;
        int prev,cur;
        cin>>prev;
        if (prev != 1) isPoss = true;
        for(int i=1;i<n;i++){
            cin>>cur;
            if (prev > cur) isValid = false;
        }

        if (isPoss) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}