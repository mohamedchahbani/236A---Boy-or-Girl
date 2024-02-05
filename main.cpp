#include<bits/stdc++.h>
using namespace std;


int main(){
    string ch;
    int l,nb=0;
    int j,i,t[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cin>>ch;
    l=ch.length();
    for ( i = 0; i < l;i++)
    {
        j=ch[i]-'a';
        t[j]=t[j]+1;
    }
    for ( i = 0; i < 26; i++)
    {
        if(t[i]!=0){
            nb++;
        }
    }
    if (nb%2==0)
    {
        cout<<"CHAT WITH HER!";
    }else
    {
        cout<<"IGNORE HIM!";
    }
    
    
    
    
    
    return 0;
}