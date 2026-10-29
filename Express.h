#pragma once
#include <iostream>
#include"DeliveryPartner.h"
#include"Package.h"
using namespace std;

class Express : public  Package , public DeliveryPartner{
private:
	int priorityLevel;
public:
	Express(int a, char b[50], Date c, double d, const char* e, const char* f, int g);

	void setpriorityLevel(int a);

	int getPriorityLevel();

	void displayInfo();

	~Express();

};