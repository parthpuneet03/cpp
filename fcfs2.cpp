#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
#include <algorithm>
using namespace std;


int main() {
    map<int,int> m1;
    map<int,int> m2;
    for(int i=0;i<4;i++)
    {
       int a,b,c;
        cin>>a>>b>>c;
        m1[b]=a;
        m2[b]=c;
    }
    vector<int> v;
    int sum=0;
    for(auto it: m2)
    {
    if(sum==0)
        v.push_back(0);
        else
       v.push_back(sum-(it.first));
       sum+=it.second;
    }
    map<int,int> m3;
    int i=0;
    for(auto it: m1)
    {
        m3[it.second]=v[i];
        i++;
    }
    int x=0;
    for(auto it: m3)
    {
        cout<<"P"<<it.first<<" (WT="<<it.second<<")";
            if(x<3)
                cout<<", ";
        x++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
