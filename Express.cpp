#include <iostream>
#include "Express.h"
using namespace std;

Express::Express(int a, char b[50], Date c, double d, const char* e, const char* f, int g) {
	setid(a);
	setrecipientName(b);
	setshippingDate(c);
	setdeliveryCost(d);
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
	
	cout << "\nid: " << getid()
		<< "\nRecipient name: " << printrecipientName()
		<< "\nDelivery cost: " << getdeliveryCost()
		<< "\nPartner name: " << getpartnerName()
		<< "\ncity: " << getcity()
		<< "\nPriority level: " << getPriorityLevel();
}


Express::~Express(){}
