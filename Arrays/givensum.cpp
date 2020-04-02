#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;

    cin>>n;
     int rsum;
    cin>>rsum; 
    int a[n];
    for(int i=0;i<n;i++)
        {cin>>a[i];
        
        }
    
    int sum=0;
   
    int k=0;
   
    for(int i=0;i<n;i++)
       {
           sum=a[i];
           for(int j=i+1;j<=n;j++)
           {
               if(sum==rsum)
               cout<<"Indices"<<i<<" "<<j-1;

               if(sum>rsum||j>=n)
               break;
            
                 sum+=a[j];

           }
          

           
       }

    
}