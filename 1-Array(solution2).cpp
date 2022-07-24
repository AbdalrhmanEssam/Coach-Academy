#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i <n ; ++i)
        cin>>v[i];
    sort(v.rbegin(),v.rend());
    vector<int>neg,pos;
    neg.push_back(v.back());
    v.pop_back();
    if(v.front()==0){
        pos.push_back(v.back());
        v.pop_back();
        pos.push_back(v.back());
        v.pop_back();
    }
    else {
        pos.push_back(v.front());
        v.erase(v.begin());
    }
    cout<<neg.size()<<' ';
    for (int i = 0; i <neg.size(); ++i)
        cout<<neg[i]<<' ';
    cout<<'\n';
    cout<<pos.size()<<' ';
    for (int i = 0; i <pos.size(); ++i)
        cout<<pos[i]<<' ';
    cout<<'\n';
    cout<<v.size()<<' ';
    for (int i = 0; i <v.size(); ++i)
        cout<<v[i]<<' ';
    cout<<'\n';

}