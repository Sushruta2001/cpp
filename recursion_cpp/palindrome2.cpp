#include<bits/stdc++.h>
using namespace std;

bool palindrome(int arr[],int start,int end)
{
    if(start>= end) return true;
    if(arr[start] != arr[end])
    {
        return false;
    }

    return palindrome(arr,start +1 , end - 1);
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

if (palindrome(arr,0,n-1))
{
    cout<<"true";
}
else{
    cout << "false";
}



return 0;
}