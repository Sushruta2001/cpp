#include<bits/stdc++.h>
using namespace std;

bool print(int ind , vector<int> &ds , int sum , int s,int arr[],int n )
{
    if(ind==n)
    {
        if(s==sum){
            for(auto it: ds)
            {
                cout << it << "";
                cout << endl;
                return true;
            }
            
        }
           else  return false;
    }

    ds.push_back(arr[ind]);
    s+= arr[ind];
    if(print(ind+1,ds,sum,s,arr,n)==true) 
    {
        return true;
    }

    
    s-= arr[ind];
    ds.pop_back();
    if(print(ind+1,ds,sum,s,arr,n)==true) 
    {
        return true;
    }

    return false;


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
    cin >> arr[i];
}

int sum ;
cin>>sum;

vector<int> ds;

print(0,ds,sum,0,arr,n);


return 0;
}