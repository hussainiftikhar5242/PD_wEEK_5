#include<iostream>
using namespace std;
main()
{//start of main function 
    string temp;
    string humidity;
    cout << "enter temperature type (warm/cold):";
    cin >> temp;
    cout << "enter humidity type:(dry / humid):";
    cin >> humidity;
    if( temp == "warm" && humidity == "dry")
    {
        cout<<"play tennis:";
    }
    if( temp == "warm" && humidity == "humid")
    {
        cout<<"swim:";
    }
    if( temp == "cold" && humidity == "dry")
    {
        cout<<"play basketball:";
    }
    if( temp == "cold" && humidity == "humid")
    {
        cout<<"watch tv:";
    }

}// end of main.