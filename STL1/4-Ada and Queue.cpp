#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    deque<int>dq;
    int q;
    cin>>q;
    bool flag=0;
    while(q--){
        string s;
        cin>>s;
        int val;
        if(flag){
            if(s=="toFront")
                s="push_back";
            else if(s=="push_back")
                s="toFront";
            else if(s=="back")
                s="front";
            else if(s=="front")
                s="back";
        }
        if(s=="toFront"){
            cin>>val;
            dq.push_front(val);
        }
        if(s=="push_back"){
            cin>>val;
            dq.push_back(val);
        }
        else if(s=="back"){
            if(!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else cout<<"No job for Ada?\n";
        }
        else if(s=="front"){
            if(!dq.empty()){
                cout<<dq.front()<<'\n';
                dq.pop_front();
            }
            else cout<<"No job for Ada?\n";
        }
        else if(s=="reverse")
            flag=!flag;
    }
}
