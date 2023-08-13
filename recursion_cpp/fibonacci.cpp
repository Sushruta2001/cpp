#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n<= 1) return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;

}




int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int n;
cin >> n;

fibonacci(n);
cout << fibonacci(n);



return 0;
}