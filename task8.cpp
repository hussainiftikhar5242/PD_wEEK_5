#include<iostream>
using namespace std;
int main()
{//start of main
    int hour1,mint1,hour2,mint2;
    cout<<"enter exam starting time in hours(0 to 23):";
    cin>> hour1;
    cout<<"enter exam starting time in mintue(0 to 59):";
    cin>> mint1;
    cout<<"enter  student arrive time  in hours(0 to 23):";
    cin>> hour2;
    cout<<"enter student arrive  time in mintue(0 to 59):";
    cin>> mint2;
    if(hour1 <= hour2 && mint1 < mint2 )
    {
        hour2=hour2-hour1;
        mint2=mint2-mint1;
        mint2=hour2*60-mint2;
        if(hour2>=1)
        {   
            mint2=mint2*(-1);
            cout<< "late"<<endl;
            cout<<hour2<<":"<<mint2<<"after the start"<<endl;
        }
        else 
        {
            mint2=mint2*(-1);
            cout<< "late"<<endl;
            cout<<mint2<<" minutes after the start"<<endl;
        }
    }
    else  if( hour1 > hour2 && mint1 >= mint2)
    {
        hour2=hour1-hour2;
        mint2=mint1-mint2;
        if(hour2<=1)
        {
            cout<<"earler:"<<endl;
            cout<<hour2<<":"<<mint2<<"hours"<<"before the start"<<endl;
        }
        else 
        {
            cout<<"earler:"<<endl;
            cout<<hour2<<":"<<mint2<<"minutes after the start"<<endl;
        }
    }
    else if(hour1>=hour2 && mint1<mint2)
    {
        mint2=mint2-mint1;
        hour1=hour1-hour2;
        mint2=hour1*60-mint2;
        if(mint2<=30)
        {
            cout<<"on time"<<endl;
            cout<<mint2<<"minutes before the start"<<endl;
        }
        else 
        {
            cout<<"on time"<<endl;
            cout<<mint2<<"before the start:"<<endl;
        }
        
    }
    else if(hour1<hour2 && mint1>mint2)
    {
        hour2=hour2-hour1;
        mint1=mint1-mint2;
        mint1=hour2*60-mint1;
        cout<<"late"<<endl;
        cout<<mint1<<"minutes after the start";
    }
    else if(hour1==hour2 && mint1==mint2) 
    {
        cout<<"on time";
    }
    else 
    {
        cout<<"error";
    }


}//end of main.