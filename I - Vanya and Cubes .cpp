#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=1,ans=0;
    while(n>=sum){
        sum+=++ans;
        n-=sum;
    }
    cout<<ans<<'\n';
}