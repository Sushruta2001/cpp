#include<iostream>

using namespace std;

void merge(int arr1[] , int m , int arr2[], int n , int arr3[])
{
    int i = 0 , j = 0 , k = 0;

    while(i < m && j < n)
    {
        if(arr1[i]< arr2[j])
        {
            arr3[k]= arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i<m){
        arr3[k] = arr1[i];
        i++;
        k++; 
    }
    while(j<n){
        arr3[k] = arr2[j];
        j++;
        k++; 
    }
}

void print (int arr3[], int n)
{
    for(int i = 0; i <n; i++)
    {
        cout<< arr3[i] << " ";
    }
    cout<< endl;
}


int main()
{
    int arr1[5]={4,5,6,7,8};
    int arr2[3]={1,2,3};

    int arr3[8]={};

    merge(arr1,5,arr2,3,arr3);

    print(arr3 , 8);


    return 0;


}