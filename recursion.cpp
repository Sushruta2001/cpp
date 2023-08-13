#include<bits/stdc++.h>
using namespace std;

// void print()
// {
//     cout << "1" << endl;
//     print();
// }

void name (int i,int n)
{
    if(i<1) return;
    else{
        cout<<i<<endl;
    name(i-1,n);
    }
    
}
int main()
{

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


// print();


int n ;
cin >> n;
name(n,n);

return 0;
}