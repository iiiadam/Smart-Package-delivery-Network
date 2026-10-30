#ifndef DELIVERY_PARTNER_H
#define DELIVERY_PARTNER_H
#include <iostream>
using namespace std;

class DeliveryPartner {
private:
	char partnerName[50];
	char city[50];
public:
	DeliveryPartner(char a[50], char b[50]);
	void setpartnerName(const char a[]);
	char* getpartnerName();
	void setcity(const char a[]);
	char* getcity();
	DeliveryPartner();
	~DeliveryPartner();
};
#endif