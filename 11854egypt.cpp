#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    for(;;)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            break;
        }

        if(a*a+b*b ==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
        {
            cout<<"right"<<endl;

        }
        else cout<<"wrong"<<endl;

    }

}






