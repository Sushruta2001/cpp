#include<bits/stdc++.h>
using namespace std;

int print(int ind , vector<int> &ds, int arr[], int s , int sum , int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            return 1;
        }

        return 0;
    }

    ds.push_back(arr[ind]);
    s+=arr[ind];
    int l = print(ind+1,ds,arr,s,sum,n);

    ds.pop_back();
    s-=arr[ind];

    int r = print(ind+1,ds,arr,s,sum,n);

    return l+r;

}


int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
vector<int> ds;
int sum;
cin>>sum;

int count = print(0,ds,arr,0,sum,n);

cout<< count << endl; 

return 0;
}