#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
        cin>>ar[i];
    int maj =ar[0];
    int count = 1;
    for(int i =1;i<n;i++)
    {
        if(ar[i]==maj)
            count++;
        else 
            count--;
        if(count<0)
            maj = ar[i];
    }
    count =0;
    for(int i =0;i<n;i++)
        if(ar[i]==maj)
            count++;
    if(count>n/2)
        cout<<maj<<endl;
    else
    {
        cout<<-1<<endl;
    }
}