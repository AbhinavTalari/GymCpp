#include<bits/stdc++.h>

using namespace std;

void merge(int ar1[], int ar2[], int m, int n) 
{ 
    // Iterate through all elements of ar2[] starting from 
    // the last element 
    for (int i=n-1; i>=0; i--) 
    { 
        /* Find the smallest element greater than ar2[i]. Move all 
           elements one position ahead till the smallest greater 
           element is not found */
        int j, last = ar1[m-1]; 
        for (j=m-2; j >= 0 && ar1[j] > ar2[i]; j--) 
            ar1[j+1] = ar1[j]; 
  
        // If there was a greater element 
        if (j != m-2 || last > ar2[i]) 
        { 
            ar1[j+1] = ar2[i]; 
            ar2[i] = last; 
        } 
    } 
} 
  
int main()
{
    int a[]={1,5,9,10,15,20};
    int b[]={2,3,8,13};
    
    merge(a,b,6,4);
    for(int i=0;i<6;i++)
    cout<<a[i]<<" ";

    for(int i=0;i<4;i++)
    cout<<b[i]<<" ";



}