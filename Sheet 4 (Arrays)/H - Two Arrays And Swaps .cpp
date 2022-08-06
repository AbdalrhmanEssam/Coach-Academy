#include<iostream>
using namespace std;
int main() {
    int t;
    int a[31], b[31];
    int n, k;
    cin>>t;
    while(t--) {
        cin >> n >> k;
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i)
            cin >> b[i];

        while(k--){
            int  x=0;
            for (int j = 1; j < n; ++j) {
                if (a[j] < a[x])
                    x = j;
            }
            int  y=0;
            for (int j = 1; j < n; ++j) {
                if (b[j] > b[y])
                    y = j;
            }
            if (a[x] < b[y])
                swap(a[x], b[y]);
        }
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum+=a[i];
        cout << sum << '\n';
    }
}