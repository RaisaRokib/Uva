
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

for(int i=1;i<=t;i++){
        string s;
    cin>>s;
 if(s.size()<=3  && s.at(1)=='n' && s.at(2)=='e'){

    cout<<"1"<<endl;

    }

else if(s.size()<=3 && s.at(0)=='o' && s.at(2)=='e')
{
    cout<<"1"<<endl;
}
else if(s.size()<=3 && s.at(0)=='o' && s.at(1)=='n')
{
    cout<<"1"<<endl;
}

else if(s.size()<=3 && s.at(1)=='w' && s.at(2)=='o')
{
    cout<<"2"<<endl;
}
else if(s.size()<=3 && s.at(0)=='t' && s.at(2)=='o')
{
    cout<<"2"<<endl;
}
else if(s.size()<=3 && s.at(0)=='t' && s.at(1)=='w')
{
    cout<<"2"<<endl;
}
else if(s.size()<=5 && s.at(1)=='h' && s.at(2)=='r' && s.at(3)=='e' && s.at(4)=='e')
{
    cout<<"3"<<endl;
}
else if(s.size()<=5 && s.at(0)=='t' && s.at(2)=='r' && s.at(3)=='e' && s.at(4)=='e')
{
    cout<<"3"<<endl;
}
else if(s.size()<=5 && s.at(0)=='t' && s.at(1)=='h' && s.at(3)=='e' && s.at(4)=='e')
{
    cout<<"3"<<endl;
}
else if(s.size()<=5 && s.at(0)=='t' && s.at(1)=='h' && s.at(2)=='r' && s.at(4)=='e')
{
    cout<<"3"<<endl;
}
else if(s.size()<=5 && s.at(0)=='t' && s.at(1)=='h' && s.at(2)=='r' && s.at(3)=='e')
{
    cout<<"3"<<endl;
}

}








}
