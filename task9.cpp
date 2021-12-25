#include <iostream>
using namespace std;
int main()
{//start of main

    int h, horizontal, vertical;// h mean siz e,horizontal mean x value and vertical mean y value
    cout << "enter value of h" << endl;
    cin >> h;
    cout << "enter x axis value" << endl;
    cin >> horizontal;
    cout << "enter y axis value" << endl;
    cin >> vertical;
    if ((horizontal >= 0 && horizontal < h) && vertical == 0)
    {
        cout << " on border";
    }
    else if ((vertical >= 0 && vertical <= h) && horizontal == 0)
    {
        cout << " on border";
    }

    else if ((vertical <= 4 * h && vertical >= 0) && horizontal == h)
    {
        cout << " on border";
    }
    else if ((vertical >= 0 && vertical <= h) && horizontal == 2 * h)
    {
        cout << " on border";
    }
    else if (horizontal == 3 * h && (vertical >= 0 && vertical <= h))
    {
        cout << " on border";
    }
    else if ((vertical <= 4 * h && vertical >= 0) && horizontal == 2 * h)
    {
        cout << " on border";
    }

    else if ((horizontal >= h && horizontal <= 2 * h) && vertical == 4 * h)
    {
        cout << " on border";
    }
    else if ((horizontal > 0 && horizontal < 3 * h) && (vertical >= 0 && vertical <= h))
    {
        cout << "inside";
    }
    else if ((horizontal >= h && horizontal <= 2 * h) && (vertical > 0 && vertical < 4 * h))
    {
        cout << "inside";
    }
    else
    {
        cout << "outside";
    }    
}//end of main.
