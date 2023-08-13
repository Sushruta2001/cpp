#include<bits/stdc++.h>
using namespace std;
void reverse(char name[],int n)
{
    int s=0;
    int e = n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);
        // s++;
        // e--;
    }
}

int getLength(char name[])
{
    int count = 0;
    for(int i=0; name[i]!= '\0';i++ )
    {
        count ++;
    }

    return count;
}


int main()
{
    char name[20];
    cin >> name;
    // name[2] = '\0';
    cout<<"your name is" << name;
    int len =  getLength(name);
    cout << " length is :" << len <<endl ;
    reverse (name , len);
    cout << "reversed name is " << name << endl;

return 0;
}