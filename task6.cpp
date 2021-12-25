#include<iostream>
using namespace std;
int main()
{   
    float discount1,discount2;
    string room;
    string month;
    float price1,price2;
    float stay;
    cout<<"enter number you stay in hotel:";
    cin>> stay;
    cout<<"enter month name:";
    cin >> month;
    cout<<"enter room type (studio or apartment:)";
    cin >> room;
    if( month == "may" && room == "studio" || month == "october" && "studio" || room == "apartment" )
    {
        if(stay < 7 ) // if stay less than 7 days then no discount.
        {

        price1 = stay * 50;
        price2 = stay * 65;
        cout<<"apartment:"<<price2<<endl;
        cout<<"studio:"<<price1<<endl;
        }
        else if( (stay > 7 && stay < 14) && month == "may" || (stay > 7 && stay <14) && month == "october"  )// calculate the price if month is oct and may then discount is calculated.
        {
            price1 = stay * 50;
            discount1 =(price1*5)/100;
            price2 = stay * 65;
            price1 = price1 - discount1;
            cout<<"apartment:"<<price2<<endl;
            cout<<"studio:"<<price1<<endl;
        }
        else if ( stay >= 14 && month == "may" || stay >= 14 && month == "october" || stay >= 14 && room == "apartment" )
        {
            price1 = stay * 50;
            price2 = stay * 65;
            discount1=(price1*30)/100;
            price1= price1 - discount1;
            discount2=(price2*10)/100;
            price2= price2 - discount2;
            cout<<"Apartment:"<<price2<<endl;
            cout<<"studio:" <<price1<<endl; 
        }
        else 
        {
            cout<<"error:";
        }
        
    }
    if(month == "june" && room == "studio" || month == "september" && room == "studio" || room == "apartment" )
    {
        if(stay <= 14)
        {
        price1 = stay * 75;
        price2 = stay * 68;
        cout<< "apartment:"<< price2<<endl;
        cout<<"studio:"<<price1<<endl; 
        }
        else 
        {   
            price2 = stay * 68;
            price1 = stay * 75;
            discount1=(price1*30)/100;
            discount2=(price2*10)/1000;
            price1= price1 - discount1;
            price2= price2 - discount2;
            cout<<"apartment:"<<price2<<endl;
            cout<<"studio:" <<price1<<endl;
        } 

    }
    if(month == "july" && room == "studio" || month == "auguest" && "studio" || room == "apartment" )
    {
        if(stay <= 14)
        {
        price1 = stay * 76;
        price2 = stay * 77;
        cout<< "apartment:"<< price2<<endl;
        cout<<"studio:"<<price1<<endl; 
        }
        else 
        {   
            price2 = stay * 76;
            price1 = stay * 77;
            discount2=(price2*10)/100;
            cout<<"discount 2"<<discount2<<endl;
            price2= price2 - discount2;
            cout<<"apartment:"<<price2<<endl;
            cout<<"studio:" <<price1<<endl;
        } 

    }

}// end of main 