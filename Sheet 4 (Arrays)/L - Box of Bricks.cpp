#include<iostream>
using namespace std;
int main() {
    int arr[51];
    int n,t=1;
    while((cin>>n),n) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        sum /= n;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] < sum) {
                ans += sum - arr[i];
            }
        }
        cout<<"Set #"<<t++<<'\n';
        cout << "The minimum number of moves is " << ans << ".\n\n";
    }
}