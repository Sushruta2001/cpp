#include<bits/stdc++.h>
using namespace std;
void backtrack(int i , int n)
{
    if(i<1) return;

    else{

        backtrack(i-1,n);
    }
    cout << i << endl;
}

int main()
{   
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif 

    int n;
    cin >> n;

    backtrack(n,n);

return 0;
}