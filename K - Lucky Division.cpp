#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i = 1; i <=n ; ++i) {
        if(n%i==0){
            bool ok=true;
            int y=i;
            while(y>0){
                if(y%10!=4&&y%10!=7){
                    ok= false;
                    break;
                }
                y/=10;
            }
            if(ok== true) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}