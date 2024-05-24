#pragma once
#include<iostream>
#include<string>
using namespace std;
class Adaptor
{
	string ID;
	string interface;
	double price;
	double speed;
	static int counter;
public:
	Adaptor(string interface, double price, double speed);

	string getId()const;
	string getInterface()const;
	double getPrice()const;
	double getSpeed()const;

	void setInterface(string interface);
	void setPrice(double price);
	void setSpeed(double speed);

	friend ostream& operator<<(ostream& out, const Adaptor& obj);
	
};

