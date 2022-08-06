#include<iostream>
using namespace std;
int main() {
    int arr[150001];
    int n;
    int t;
    cin>>t;
    while(t--) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        int ans = 0, mn = arr[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            if (mn < arr[i])
                ++ans;
            else mn = arr[i];
        }
        cout << ans << '\n';
    }
}
