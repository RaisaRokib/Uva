#include<bits/stdc++.h>
using namespace std;
int main()
{
    float c,f,F,TC,TF,C;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>c>>f;
        F=(1.8)*c+32;
        TF=F+f;
        C=(TF-32)/9;
        TC=C*5;
        printf("Case %d: %.2f\n",i,TC);

    }










}
