#include<bits/stdc++.h>
using namespace std;


int count_the_triplets(vector<int> a)
{
    int max_num=0;
    for(int i=0;i<a.size();i++)
    {
    max_num=max(max_num,a[i]);
    }
    int freq[max_num+1]={0};

    for(int i=0;i<a.size();i++)
    {
        freq[a[i]]++;
    }
    int total=0;
    //Case 1: All  3 are zeroes 
    total=freq[0]*(freq[0]-1)*(freq[0]-2)/6;
    
    //CAse 2: 2 equal numbers and the other is 0
    for(int i=1;2*i<=max_num;i++)
        total+=freq[0]*freq[i]*(freq[i]-1)/2;
    //Case 3: All three are different

    for(int i=1;i<=max_num;i++)
        for(int j=i+1;i+j<=max_num;j++)
        total+= freq[i] * freq[j] * freq[i + j];  
    

    return total;

}
int main()
{
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int inp;
        cin>>inp;
        a.push_back(inp);
    }


    cout<<count_the_triplets(a);
    


}