#include<iostream>
using namespace std;
main()
{//start of main function;
    int num1,num2,num3,num4,num5;
    string name;
    cout<<"enter student name:";
    cin>> name;
    cout<<"each subect has 100 marks:"<<endl;
    cout<<"enter first subject marks:";
    cin>> num1;
    cout<<"enter 2nd subject marks:";
    cin>> num2;
    cout<<"enter 3rd subject marks:";
    cin>> num3;
    cout<<"enter 4rth subject marks:";
    cin>> num4;
    cout<<"enter 5th subject marks:";
    cin>> num5;
    float total_num=num1+num2+num3+num4+num5;
    float aggregate=(total_num*100)/500;
    cout<<"student name :"<<name<<endl;
    cout<<aggregate;
    if( aggregate >= 90 && aggregate <= 100)
    {  
        cout<<"Grade is A+:";
    }
    else if( aggregate >= 80 && aggregate <= 90)
    {
        cout<<"Grade is A:";
    }
    else if( aggregate >= 70 && aggregate <= 80)
    {
        cout<<"Grade is B+:";
    }
    else if( aggregate >= 60 && aggregate <= 70)
    {
        cout<<"Grade is B:";
    }
    else if( aggregate >= 50 && aggregate <= 60)
    {
        cout<<"Grade is C:";
    }
    else if( aggregate >= 40 && aggregate <= 50)
    {
        cout<<"Grade is D:";
    }
    else 
    {
        cout<<"Grade is F:";
    }


}