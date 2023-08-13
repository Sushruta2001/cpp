#include<bits/stdc++.h>
using namespace std;
void addition(int i , int sum)
{
    if(i<0)
    {   
        cout<<sum<<endl;
        return;
    }
    addition(i-1,sum + i);
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin >> n;
// int sum = 0;
addition(n,0);



return 0;
}