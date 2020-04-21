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
      
        while(n--)
        {
            int inp;
            cin>>inp;
            array.push_back(inp);
            
                
        }
        sort(array.begin(),array.end());
        int element=-1;
        int max_freq=0;
        int count=0;
        int temp=array[0];
        for(int i=1;i<n;i++)
        {
            if(temp=array[i])
                {
                    count++;
                    
                }

            else{
                count=1;
                temp=array[i];
            }

            if(max_freq<count)
                {
                    max_freq=count;
                    element=array[i];
                    if(max_freq>n/2)
                        {
                            cout<<element<<endl;
                            break;
                        }

                }


        }

        cout<<((element>-1)?element:-1)<<endl;
            

        }
       

        
        
        

       
    }
    
