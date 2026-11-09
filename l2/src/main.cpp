#include "Item4.hpp"
#include "Item5.hpp"
#include "Item6.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "=== EFFECTIVE C++ DEMO (ITEMS 4, 5, 6) ===\n\n";

    // --- Item 4 Demo ---
    std::cout << "--- Item 4: Object Initialization ---\n";
    AddressBookEntry entry("Alice Popescu", "10 Main Street", "0712345678");
    entry.displayContactInfo();
    std::cout << "\n";

    // --- Item 5 Demo ---
    std::cout << "--- Item 5: Silent Compiler Functions & Restrictions ---\n";

    // 1. SensorReading: Compiler successfully generates copy constructor and copy assignment
    SensorReading reading1;
    reading1.value = 42;
    reading1.timestamp = 100.5;

    SensorReading reading2 = reading1; // Compiler-generated copy constructor works
    std::cout << "Copied SensorReading value: " << reading2.value << "\n";

    SensorReading reading3;
    reading3 = reading1; // Compiler-generated copy assignment operator works
    std::cout << "Assigned SensorReading value: " << reading3.value << "\n";

    // 2. SecureDevice: Contains a reference and a const member
    std::string deviceStatus = "Active";
    SecureDevice deviceA(deviceStatus, 101);
    deviceA.print();

    // SecureDevice deviceB(deviceStatus, 202);
    // deviceB = deviceA; // COMPILER ERROR! Copy assignment is implicitly deleted
    // because of the reference and const members.
    std::cout << "Copy assignment for SecureDevice is successfully blocked by the compiler.\n";
    std::cout << "\n";

    // --- Item 6 Demo ---
    std::cout << "--- Item 6: Disallowing Generated Functions ---\n";
    HomeForSale primaryHome("123 Boulevard Street");
    primaryHome.display();

    // HomeForSale copiedHome(primaryHome); // COMPILER ERROR! Copy constructor is deleted (= delete).
    // primaryHome = copiedHome;          // COMPILER ERROR! Copy assignment is deleted (= delete).
    std::cout << "Attempting to copy HomeForSale is prevented by '= delete'.\n";

    return 0;
}