#include <climits>
#include <iostream>

using namespace std;
int main() {
    
    int n,max=INT_MIN,currmax=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for (int i = 0; i < n; i++)
    {
        currmax = currmax + arr[i];
        if (max < currmax)
            max = currmax;

        if (currmax < 0)
            currmax = 0;
    }
    cout<<max;
    return 0;
}
