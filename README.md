A delivery company operates in several cities and needs software to track packages and delivery services. Each package has a unique ID, recipient information, a shipping date, and a delivery cost. Some packages are handled through the company's standard delivery service, while others are sent as express shipments through third-party delivery partners.

The company currently keeps its records manually, which makes it difficult to:

Track packages
Identify expensive shipments
Manage partner delivery services
Maintain shipment records
Generate reports
Design and implement a C++ system that models the package delivery network and provides reusable components for storing, processing, and analyzing delivery records.

 The project must be split into:

Header files (.h) for class declarations
Source files (.cpp) for function definitions
main.cpp (provided by instructor) for demonstration and testing
Components

Structure: Create a struct Date with attributes: day, month, year.
Namespace: Create a namespace Utils that contains utility functions to validate the cost and validate the ID tracking.
Example: validatePrice(double) → returns true if price ≥ 0.
Classes:
Package Class:
Attributes: id, recipientName, shippingDate, deliveryCost.
Provide constructors, copy constructor, destructor.
Provide getters/setters.
Overload << and >> operators for input/output.
The following function, which modifies the delivery cost through a pointer:
                       void updateCost(double* cost);

DeliveryPartner Class:
Attributes: partnerName, city.
Provide constructors, getters/setters.
Express Class:
Inherits from Package and DeliveryPartner (multiple inheritance).
Attribute: priorityLevel.
Required function displayInfo() → prints package details and partner details, along with the priority level.
Templates:
AddItem(), displayItems(), removeItems().
Template Class: Container<T> implement a generic container class that stores its objects in an array, and requires the following member functions:
Template Function: implement generic function for comparing values such as cost and priority level.
