#include<bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &ds , int s,int sum,int arr[], int n)
{   if(ind==n){
            if(s==sum)
             {
                    for(auto it: ds)
                    cout<<it<<" ";
                }
                cout<<endl;
                return;
}

ds.push_back(arr[ind]);
s += arr[ind];
print(ind+1,ds,s,sum,arr,n);
ds.pop_back();
s-=arr[ind];
print(ind+1,ds,s,sum,arr,n);

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
    cin>> arr[i];
}

int sum;
cin>>sum;

vector<int> ds;

print(0,ds,0,sum,arr,n);



return 0;
}