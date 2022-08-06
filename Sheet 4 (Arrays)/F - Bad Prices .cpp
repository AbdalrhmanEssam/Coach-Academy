#include <iostream>
using namespace std;

int main()
{
    long long int n, t, v, arr[150009]={0};
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        v = arr[n-1];
        for(int i=(n-2); i>=0; i--)
        {
            if(v < arr[i])sum++;
            else v = arr[i];
        }
        cout<<sum<<'\n';
    }
    return 0;
}
