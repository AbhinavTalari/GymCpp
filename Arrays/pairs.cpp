#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        vector<int> x;
        vector<int> y;
        for(int i=0;i<m;i++)
        { 
            int input;
            cin>>input;
            x.push_back(input);
            
        }
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            y.push_back(input);
        }

        sort(x.begin(),x.end());
        sort(y.end(),y.end());


        int total=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                 if(pow(x[i],y[j])>pow(y[j],x[i]))
                 total++;
            }
        }

        cout<<total<<endl;

    }
}