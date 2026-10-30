#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include <cstring>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

namespace Utils {
	bool validatePrice(double a);
	bool validateTrackingID(int a);
}

class Package {
private:
	int id;
	char recipientName[50];
	Date shippingDate;
	double deliveryCost;
public:
	Package(int id, char recipientName[50], Date shippingDate, double deliveryCost);

	int getid();

	void setid(int a);

	void getRecipientName(char a[]);

	void setRecipientName(char a[]);

	const char* printrecipientName();

	int getshippingDateday();
	int getshippingDatemonth();
	int getshippingDateyear();

	void setshippingDate(Date a);

	double getDeliveryCost();

	void setDeliveryCost(double a);

	void updateCost(double* cost);

	Package(Package& c);

	Package();

	~Package();

	friend ostream& operator<<(ostream& out, const Package& p);

	friend istream& operator>>(istream& in, Package& p);
};

#endif
