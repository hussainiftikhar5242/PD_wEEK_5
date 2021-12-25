#include<iostream>
using namespace std;
int main()
{   
    string time;//this show the time is night or day. d show day and n show night.
    int mint=0;//this show the mintue you connect with call.
    string type;//this show the type of services.
    float charges;
    cout<<"enter mintue:";
    cin >> mint;
    cout<<"enter network type:(select p/r):";
    cin>> type;
    cout<<"enter time day or night:(select d/n):";
    cin>> time;
    if( type == "r" )
    {
        if(mint <= 50)
        {
            cout<<"charges is equal to :"<< "10"<<endl;
        }
        else 
        {
            mint=mint-50;
            charges=mint*0.20;
            charges=charges+10;
            cout<<"charges is equal to:"<<charges;
        }
    }
    if( type == "p")
    {
        if(time == "d" && mint <=75)
        {
            cout<<"charges is equal to:"<<"75"<<endl;
        }
        else if( time == "d" && mint>75)
        {
            mint=mint-75;
            charges=mint*0.10;
            charges=charges+75;
            cout<<"charges is equal to "<<charges<<endl;
        }
        if( time == "n" && mint <= 100)
        {
            cout<<"charges is equal to :"<<"100"<<endl;
        }
        else 
        {
            mint=mint-100;
            charges=mint*0.05;
            charges=charges+100;
            cout<<"charges is equal to:"<<charges<<endl;
        }
    }

}