#include <iostream>
#include "Package.h"
#include "DeliveryPartner.h"
#include "Express.h"
#include "Container.h"
using namespace std;

int main() {
    char nameA[50] = "Ali";
    char nameZ[50] = "Zara";
    char newName[50] = "Changed";
    char arr[50];

    cout << "1. Utils" << endl;
    cout << "validate Price of -5: " << Utils::validatePrice(-5) << endl;
    cout << "validate Price of 0: " << Utils::validatePrice(0) << endl;
    cout << "validate Tracking of ID 0: " << Utils::validateTrackingID(0) << endl;
    cout << "validate Tracking of ID 101: " << Utils::validateTrackingID(101) << endl;

    cout << "2. Package output" << endl;
    Package p1(101, nameA, Date{ 5, 3, 2025 }, 250.5);
    cout << p1 << endl;

    cout << "3. Package input" << endl;
    cout << "[INPUT 1 of 2] Enter package (id name day month year cost): ";
    Package p2;
    cin >> p2;
    cout << p2 << endl;

    cout << "4. Setter and updateCost" << endl;
    p1.setDeliveryCost(-10);
    cout << "Cost after -10: " << p1.getDeliveryCost() << endl;

    double newCost = 300;    //or  enter newCost from user
    p1.updateCost(&newCost);

    cout << "Cost after new cost: " << p1.getDeliveryCost() << endl;

    cout << "5. Copy constructor" << endl;

    Package p3(p1);
    p3.setRecipientName(newName);

    p1.getRecipientName(arr);
    cout << "Original recipient: " << arr << endl;

    p3.getRecipientName(arr);
    cout << "Copy recipient: " << arr << endl;

    cout << "6. Express" << endl;

    Express e1(202, nameZ , Date { 10, 4, 2025 } , 480 , "FastLogix", "Karachi", 2);

    e1.displayInfo();

    cout << "7. Maximum" << endl;

    cout << "Max cost: " << getMaximum(p1.getDeliveryCost(), p2.getDeliveryCost()) << endl;

    cout << "Max priority: " << getMaximum(e1.getPriorityLevel(), 5) << endl;

    cout << "8. Container" << endl;

    Container<Package> packages;

    packages.AddItem(p1);
    packages.AddItem(p2);

    cout << "Items in container: " << packages.getSize() << endl;

    packages.displayItems();

    int index;

    cout << "[INPUT 2 of 2] Enter index to remove ( starting 0): ";

    cin >> index;

    cout << "Remove item at index " << index << ": " << packages.removeItems(index) << endl;

    cout << "Items in container: " << packages.getSize() << endl;

    packages.displayItems();

    cout << "END" << endl;
    
    return 0;
}

