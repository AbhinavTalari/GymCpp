// Re arrange the Array in the Max Min form

#include<bits/stdc++.h>

using namespace std;
int main()
{
   
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
       cin>>array[i];
    }

    sort(array,array+n);
    
    int minIndex=0;
    int maxIndex=n-1;
    int max_number=array[n-1]+1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            array[i]+=array[maxIndex]%max_number*(max_number);
            maxIndex--;
        }

        else
        {
            array[i]+=array[minIndex]%max_number*max_number;
            minIndex++;
        }
        
    }

    for(int i=0;i<n;i++)
    {
        array[i]/=max_number;
        cout<<array[i]<<" ";

    }


    


}