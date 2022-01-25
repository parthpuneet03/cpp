#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[4],x=0;
    for (int i=0;i<3;i++)
    {
        cin>>a[i];
        if(i!=3)
        cout<<"P"<<i+1<<" (WT="<<x<<"), ";
        x+=a[i];
    }
    cin>>a[3];
    cout<<"P4 (WT="<<x<<")";
    return 0;
}
