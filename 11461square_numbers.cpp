#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,x,res;
  for(;;){
  cin>>a>>b;
  if(a==0 && b==0){
    break;
  }
  int c=0;
  for(int i=a;i<=b;i++){

	res = sqrt(i);
    if(res*res==i){

        c++;
    }

  }
    cout<<c<<endl;

  }








}
