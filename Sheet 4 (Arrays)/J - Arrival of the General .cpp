#include<iostream>
using namespace std;
int main() {
    int n,val;
    cin>>n;
    int mn=101,x;
    int mx=0,y;
    for (int i = 0; i <n ; ++i) {
        cin>>val;
        if(val>mx){
            mx=val;
            y=i;
        }
        if(val<=mn){
            mn=val;
            x=i;
        }
    }
    int ans=y+(n-1-x);
    if(y>x)
        ans--;
    cout<<ans<<'\n';
}