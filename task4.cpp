#include<iostream>
using namespace std;
int main()
{
	int date=0;
	string month;
	cout<<"enter date:";
	cin>> date;
	cout<<"enter month:";
	cin>>month;
	if(date>=21 && month=="march" || date<=19 && month=="april")
	{
		cout<<"zodic sign is aries"<<endl;
		cout<<"symbol is the ram:";
	}
	else if (date>=20 && month=="april" || date <= 20 && month=="may")
	{
		cout<<"zodic sign is tarus"<<endl;
		cout<<"symbol is the bull";
	}
	else if (date>=21 && month=="may" || date<=20 && month=="june")
	{
		cout<<"zodiac sign is Gemini"<<endl;
		cout<<"symbol is the twins";
	}
	else if (date>=21 && month=="june" || date<=22 && month=="july")
	{
		cout<<"zodiac sign is Cancer"<<endl;
		cout<<"symbol is the Crabs";
	}
	else if (date>=23 && month=="july" || date<=22 && month=="agust")
	{
		cout<<"zodiac sign is Leo"<<endl;
		cout<<"symbol is the Line ";
	}
	else if (date>=23 && month=="agust" || date<=22 && month=="september")
	{
		cout<<"zodiac sign is Vergo"<<endl;
		cout<<"symbol is the Virgin";
	}
		else if (date>=23 && month=="september" || date<=22 && month=="october")
	{
		cout<<"zodiac sign is Lebra"<<endl;
		cout<<"symbol is the Scales";
	}
	else if (date>=23 && month=="october" || date<=21 && month=="november")
	{
		cout<<"zodiac sign is Secropi"<<endl;
		cout<<"symbol is the Scroption";
	}
	else if (date>=22 && month=="november" || date<=21 && month=="december")
	{
		cout<<"zodiac sign is Sattagerius"<<endl;
		cout<<"symbol is the Archer";
	}
	else if (date>=22 && month=="december" || date<=19 && month=="january")
	{
		cout<<"zodiac sign is Capricon"<<endl;
		cout<<"symbol is the Goat";
	}
	else if (date>=20 && month=="january" || date<=18 && month=="february")
	{
		cout<<"zodiac sign is Aqurius"<<endl;
		cout<<"symbol is the water bearer";
	}
	else if (date>=19 && month=="february" || date<=20 && month=="march")
	{
		cout<<"zodiac sign is Pisces"<<endl;
		cout<<"symbol is the fishes";
	}
	else
	{
		cout<<"wrong input";
	}
	
	
}