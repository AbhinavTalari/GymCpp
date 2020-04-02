#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
          int n;
        vector<int> array;
        cin>>n;
        long long int sum=n*(n+1)/2;
         for(int i=0;i<n-1;i++)
         {
        int inp;
        cin>>inp;
        array.push_back(inp);
        sum-=inp;
          }
        cout<<sum<<endl;

       

    }
  
}