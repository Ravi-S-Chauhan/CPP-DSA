#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        bool isCorrect = true;
        cin>>a>>b;
        int prev=-1, cur = 0;
        for(int i=0;i<a;i++){
            cin>>cur;
            if (prev > cur) {isCorrect = false;}
            prev = cur;
        }

        if (isCorrect || b > 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}