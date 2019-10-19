#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int y;
    cin>>str>>y;
    int sum =0;
    bool pre=false;
    int count=0;
    for(char x:str)
    {
        sum = sum*10 + (x-'0');
        if(sum<=y)
        {
            pre = true;
        }
        else{
            if(pre)
                count++;
            
            sum = (x-'0')<=y?(x-'0'):0;
            pre = sum !=0;
        }
    }
    if(pre)
        count++;
    cout<<count<<endl;
}
