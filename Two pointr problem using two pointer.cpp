#include<bits/stdc++.h>
#define ll long long int
int val1,val2;
using namespace std;
bool solve(int n,int ar[],int x)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum=ar[i]+ar[j];
        if(sum==x)
        {
            val1=ar[i];
            val2=ar[j];
            return true;
        }
        else if(sum>x) j--;
        else i++;

    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int ar[n+5];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    int x;
    cin >> x;
    bool  ans=solve(n,ar,x);
    if(ans==true)
    {
        cout << "YES" << endl;
        cout << val1 << " " << val2 << endl;
    }

    else cout << "No" << endl;
    main();
}
