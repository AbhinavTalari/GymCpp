#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int>array;
        cin>>n;
        unordered_map<int,int> mp;
        int fin=0;
        int length=n;
        while(n--)
        {
            int inp;
            cin>>inp;
            array.push_back(inp);
            mp[inp]++;
            if(mp[inp]>length/2)
                fin=inp;
            
        }
        if (fin>0)
        cout<<fin<<endl;
        else
        {
            cout<<-1<<endl;
        }
        

        

       
    }
    
}