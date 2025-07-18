#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char ch;
        int total = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> ch;
                if (ch == 'X') {
                    int ring = min(min(i, j), min(9 - i, 9 - j));
                    total += ring + 1;
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}