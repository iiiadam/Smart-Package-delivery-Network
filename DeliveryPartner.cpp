#include <iostream>
#include<cstring>
#include "DeliveryPartner.h"
using namespace std;

DeliveryPartner::DeliveryPartner(char a[50], char b[50]) {
	strcpy(partnerName, a);
	strcpy(city, b);
}

void DeliveryPartner::setpartnerName(const char a[]) {
	strcpy(partnerName, a);
}

char* DeliveryPartner::getpartnerName() {
	return partnerName;
}

void DeliveryPartner::setcity(const char a[]) {
	strcpy(city, a);
}

char* DeliveryPartner::getcity() {
	return city;
}

DeliveryPartner::DeliveryPartner() {
	strcpy(partnerName, "");
	strcpy(city, "");
}

DeliveryPartner::~DeliveryPartner(){}