#include "Item4.hpp"
#include <iostream>

ContactPhoneNumber::ContactPhoneNumber(const std::string &phoneNumber)
    : phoneNumber(phoneNumber) {}

std::string ContactPhoneNumber::getPhoneNumber() const
{
    return phoneNumber;
}

AddressBookEntry::AddressBookEntry(const std::string &contactName,
                                   const std::string &contactAddress,
                                   const std::string &contactPhone)
    : contactName(contactName),
      contactAddress(contactAddress),
      contactPhone(contactPhone),
      timesConsultedCount(0)
{
    std::cout << "[Item 4] AddressBookEntry properly initialized via member initialization list.\n";
}

void AddressBookEntry::displayContactInfo() const
{
    std::cout << "Contact Name: " << contactName
              << ", Address: " << contactAddress
              << ", Phone: " << contactPhone.getPhoneNumber()
              << ", Times Consulted: " << timesConsultedCount << "\n";
}