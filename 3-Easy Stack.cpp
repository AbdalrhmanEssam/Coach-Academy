#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    queue<int>q;
    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n;
        if(n==1){
            cin>>l;
            q.push(l);
        }
        else if(n==2&&!q.empty()){
            q.pop();
        }
        else if(n==3){
            if(q.empty())
                cout<<"Empty!\n";
            else cout<<q.front()<<'\n';
        }
    }
}