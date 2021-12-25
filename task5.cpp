#include<iostream>
using namespace std;
int main()
{ // start of main function  
    float quantity;
    string name;
    string day;
    cout<< "enter furit name:(banana,apple,orange,grapefruit,kiwi,pineapple,grapes)";
    cin >> name;
    cout<< "enter day:";
    cin >> day;
    cout<<"enetr quantity:";
    cin>> quantity;
    float price;
    if( name == "banana" && day == "monday" || name == "banana" && day == "tuesday" || name == "banana" && day == "wenesday" || name == "banana" && day == "thursday" || name == "banana" && day == "friday" || name == "banana" && day == "saturday")
    {
        price = quantity * 2.50;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "banana" && day == "sunday")
    {
        price = quantity * 2.70;
        cout<< "price is equal to:"<< price; 
    }
    else if( name == "apple" && day == "monday" || name == "apple" && day == "tuesday" || name == "apple" && day == "wenesday" || name == "apple" && day == "thursday" || name == "apple" && day == "friday" || name == "apple" && day == "saturday")
    {
        price = quantity * 1.20;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "apple" && day == "sunday")
    {
        price = quantity * 1.25;
        cout<< "price is equal to:"<< price; 
    }
    else if( name == "orange" && day == "monday" || name == "orange" && day == "tuesday" || name == "orange" && day == "wenesday" || name == "orange" && day == "thursday" || name == "orange" && day == "friday" || name == "orange" && day == "saturday")
    {
        price = quantity * 0.85;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "orange" && day == "sunday")
    {
        price = quantity * 0.90;
        cout<< "price is equal to:"<< price; 
    }
    else if( name == "grapefruit" && day == "monday" || name == "grapefruit" && day == "tuesday" || name == "grapefruit" && day == "wenesday" || name == "grapefruit" && day == "thursday" || name == "grapefruit" && day == "friday" || name == "grapefruit" && day == "saturday")
    {
        price = quantity * 1.45;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "grapefruit" && day == "sunday")
    {
        price = quantity * 1.60;
        cout<< "price is equal to:"<< price; 
    }
    else if( name == "kiwi" && day == "monday" || name == "kiwi" && day == "tuesday" || name == "kiwi" && day == "wenesday" || name == "kiwi" && day == "thursday" || name == "kiwi" && day == "friday" || name == "kiwi" && day == "saturday")
    {
        price = quantity * 2.70;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "kiwi" && day == "sunday")
    {
        price = quantity * 3.00;
        cout<< "price is equal to:"<< price; 
    }
    else if( name == "pineapple" && day == "monday" || name == "pineapple" && day == "tuesday" || name == "pineapple" && day == "wenesday" || name == "pineapple" && day == "thursday" || name == "pineapple" && day == "friday" || name == "pineapple" && day == "saturday")
    {
        price = quantity * 5.50;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "pineapple" && day == "sunday")
    {
        price = quantity * 5.60;
        cout<< "price is equal to:"<< price; 
    }
    else if( name == "grapes" && day == "monday" || name == "grapes" && day == "tuesday" || name == "grapes" && day == "wenesday" || name == "grapes" && day == "thursday" || name == "grapes" && day == "friday" || name == "grapes" && day == "saturday")
    {
        price = quantity * 3.85;
        cout<< "price is equal to:"<< price;

    }
    else if (name == "grapes" && day == "sunday")
    {
        price = quantity * 4.20;
        cout<< "price is equal to:"<< price; 
    }
    else 
    {
        cout<<"error:";
    }






}//end of main function