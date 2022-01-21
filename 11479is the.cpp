#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    for(int i=1;i<=t;i++){
    cin>>a>>b>>c;
    if(a+b<=c || a+c<=b || b+c<=a){

        cout<<"Case "<<i<<": Invalid"<<endl;
    }
    else if (a==b && b==c){
         cout<<"Case "<<i<<": Equilateral"<<endl;
    }
    else if(a==b || b==c || a==c  && a+b>c && b+c>a && a+c>b){
       cout<<"Case "<<i<<": Isosceles"<<endl;
    }
    else if(a+b>c && a+c>b && b+c>a && a!=b && b!=c && a!=c)
    {
       cout<<"Case "<<i<<": Scalene"<<endl;
    }


    }









}
