#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(int i,int arr[],int n)
{
    if(i>= n/2) return true;

    if(arr[i]!= arr[n-i-1]) return false;
    
    return checkpalindrome(i+1,arr,n);

}

int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin >> n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin >> arr[i];
}

 cout << checkpalindrome(0,arr,n-1);



return 0;
}