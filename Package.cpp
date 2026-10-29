#include <iostream>
#include <cstring>
#include "Package.h"
using namespace std;

namespace Utils {
	bool validatePrice(double a) {
		return a >= 0;
	}
	bool validateTrackingID(int a) {
		return a > 0;
	}
}

Package::Package(int a, char b[50], Date c, double d) {

		id = a;
		strcpy(recipientName , b);
		shippingDate = c;
		if (Utils::validatePrice(d))
		deliveryCost = d;
}

int Package::getid() {

	return id;
}

void Package::setid(int a) {

	 id = a;
}

void Package::getrecipientName(char a[]) {

	strcpy(a, recipientName);
}

void Package::setrecipientName(char a[]) {

	strcpy(recipientName , a);
}

const char* Package::printrecipientName() {

	return recipientName;
}

Date Package::getshippingDate() {

	return shippingDate;
}

void Package::setshippingDate(Date a) {

	shippingDate = a;
}

double Package::getdeliveryCost() {

	return deliveryCost;
}

void Package::setdeliveryCost(double a) {

	if (Utils::validatePrice(a))
	   deliveryCost = a;
}

void Package::updateCost(double* cost) {

	if ((cost != NULL) && (Utils::validatePrice(*cost))) deliveryCost = *cost;
}

ostream&operator<<(ostream& out, const Package& p) {
	out<<"Package ID: "<< p.id;
	out<<"\nRecipient Name: "<<p.recipientName;
	out<<"\nshipping Date: "<<p.shippingDate.day << "/" << p.shippingDate.month << "/" << p.shippingDate.year;
	out<<"\nDelivery Cost: "<<p.deliveryCost;
	return out;
}

istream& operator>>(istream& in, Package& p) {

	in >> p.id;
	in >> p.recipientName;
	in >> p.shippingDate.day >> p.shippingDate.month >> p.shippingDate.year;
	in >> p.deliveryCost;
	return in;
}

Package::Package() {

	id = 0;
	strcpy(recipientName, "");
	shippingDate= { 0, 0, 0 };
	deliveryCost = 0;
}

Package::Package(Package& c1) {

	id = c1.id;
	strcpy(recipientName , c1.recipientName);
	shippingDate = c1.shippingDate;
	deliveryCost = Utils::validatePrice(c1.deliveryCost);
}

Package::~Package() {
}
