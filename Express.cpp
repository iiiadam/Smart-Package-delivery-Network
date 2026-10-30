#include <iostream>
#include "Express.h"
using namespace std;

Express::Express(int a, char b[50], Date c, double d, const char* e, const char* f, int g) {
	setid(a);
	setRecipientName(b);
	setshippingDate(c);
	setDeliveryCost(d);
	setpartnerName(e);
	setcity(f);
	setpriorityLevel(g);
}

void Express::setpriorityLevel(int a) {
	priorityLevel = a;
}

int Express::getPriorityLevel() {
 return priorityLevel;
}

void Express::displayInfo() {
	
	cout << "Package ID: " << getid()<<endl
		<< "Recipient: " << printrecipientName()<<endl
		<< "Delivery Cost: " << getDeliveryCost()<<endl
		<< "Partner: " << getpartnerName()<<endl
		<< "City: " << getcity()<<endl
		<< "Priority Level: " << getPriorityLevel()<< endl
		<< "Shipping Date: "<<getshippingDateday()<<"/"<<getshippingDatemonth()<<"/"<<getshippingDateyear()<<endl;
}

Express::~Express(){}