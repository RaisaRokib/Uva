#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ter1,ter2,fin,att,cls1,cls2,cls3,sum,t;
    cin>>t;
 for(int i=1;i<=t;i++){
        cin>>ter1>>ter2>>fin>>att>>cls1>>cls2>>cls3;
    if( cls1>=cls3 && cls2>=cls3)
    {
        sum=ter1+ter2+fin+att+(cls1+cls2)/2;

    }
    else if( cls2>=cls1 && cls3>=cls1)
    {
        sum=ter1+ter2+fin+att+(cls2+cls3)/2;

    }
    else if( cls1>=cls2 && cls3>=cls2)
    {
         sum=ter1+ter2+fin+att+(cls1+cls3)/2;
    }
    /*else if(cls1==cls2 && cls2==cls3 && cls1==cls3)
    {

        sum=(ter1+ter2)*0.2+fin*0.3+att*0.1+((cls1+cls2)/2)*0.2;

    }
    else if(cls2==cls3 && cls1>cls2 &&cls1>cls3)
    {
         sum=(ter1+ter2)*0.2+fin*0.3+att*0.1+((cls1+cls2)/2)*0.2;
    }
    else if(cls1==cls3 && cls2>cls1 && cls2>cls3)
    {
        sum=ter1+ter2+fin+att+(cls1+cls2)/2;
    }
    else if(cls1==cls2 && cls3>cls1 && cls3>cls2)
    {
         sum=(ter1+ter2)*0.2+fin*0.3+att*0.1+((cls2+cls3)/2)*0.2;
    }
*/
    if(sum>=90)
    {
       cout<<"Case " <<i<<": A"<<endl;
    }
    else if(sum>=80 && sum<90)
    {
      cout<<"Case " <<i<<": B"<<endl;
    }
    else if(sum>=70 && sum<80)
    {
       cout<<"Case " <<i<<": C"<<endl;
    }
    else if(sum>=60 && sum<70)
    {
      cout<<"Case " <<i<<": D"<<endl;
    }
    else if(sum<60)
    {
     cout<<"Case " <<i<<": F"<<endl;
    }




 }











}
