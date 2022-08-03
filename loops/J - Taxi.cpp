#include<iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    int g1=0,g2=0,g3=0,g4=0;
    for (int i = 0; i <n ; ++i) {
        cin>>x;
        if(x==4)
            g4++;
        else if(x==3)
            g3++;
        else if(x==2)
            g2++;
        else g1++;
    }
    int ans=0;
    ans+=g4;
    ans+=g3;
    if(g1>=g3)
        g1-=g3;
    else g1=0;
    ans+=g2/2;
    if(g2%2==1)
        g1+=2;
//    ans+=g1/4;
//    if(g1%4!=0)
//        ans++;
    ans+=(g1+3)/4;
    cout<<ans;

}