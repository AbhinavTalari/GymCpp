#include<bits/stdc++.h>

using namespace std;


int kadanes(vector<int> array,int n)
{
      int max_sum_so_far=-9999;
    int max_sum_ending_here=0;
    vector<int>ctg;
    int start=0;
    int end=0;
    int beg=0;
    for(int i=0;i<n;i++)
    {   
        max_sum_ending_here+=array[i];
         
        if(max_sum_ending_here<0)
        {
            max_sum_ending_here=0;
            beg=i+1;           
        }
        if(max_sum_so_far<max_sum_ending_here)
        {
            max_sum_so_far=max_sum_ending_here;
            start=beg;
            end=i;

        }
       
    }

    for(int i=start;i<=end;i++)
        cout<<array[i]<<" ";
    cout<<"\n";
    return max_sum_so_far;
}

int main()
{
    int n;
    cin>>n;
    vector<int> array;
    // Kadane's 
    for(int i=0;i<n;i++)
    {
        int inp;
        cin>>inp;
        array.push_back(inp);
    }

    int x=kadanes(array,n);
    cout<<x;

  
    
}