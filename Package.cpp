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

void Package::getRecipientName(char a[]) {

	strcpy(a, recipientName);
}

void Package::setRecipientName(char a[]) {

	strcpy(recipientName , a);
}

const char* Package::printrecipientName() {

	return recipientName;
}

int Package::getshippingDateday(){
	return shippingDate.day;
}

int Package::getshippingDatemonth(){
	return shippingDate.month;
}

int Package::getshippingDateyear(){
	return shippingDate.year;
}

void Package::setshippingDate(Date a) {

	shippingDate = a;
}

double Package::getDeliveryCost() {

	return deliveryCost;
}

void Package::setDeliveryCost(double a) {

	if (Utils::validatePrice(a))
	   deliveryCost = a;
}

void Package::updateCost(double* cost) {

	if ((cost != NULL) && (Utils::validatePrice(*cost))) deliveryCost = *cost;
}

ostream&operator<<(ostream& out, const Package& p) {
	out<<"Package ID: "<< p.id<<endl;
	out<<"Recipient : "<<p.recipientName<<endl;
	out<<"shipping Date: "<<p.shippingDate.day << "/" << p.shippingDate.month << "/" << p.shippingDate.year<<endl;
	out<<"Delivery Cost: "<<p.deliveryCost<<endl;
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
	if(Utils::validatePrice(c1.deliveryCost))
	deliveryCost = c1.deliveryCost;
}

Package::~Package() {
}