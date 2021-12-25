#include<iostream>
using namespace std;
main()
{// start of main function:
    string name;
    cout << "enter country name in which you live:";
    cin >> name;
    if( name != "germany" || name != "australia")
    {
        cout<< "You should come to visit these sometime! ";
    }
    else 
    {
        cout<<"you can not visit:";
    }


}//end of main function.
