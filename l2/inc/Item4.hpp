#ifndef ITEM4_HPP
#define ITEM4_HPP

#include <string>

class ContactPhoneNumber
{
public:
    ContactPhoneNumber(const std::string &phoneNumber);
    std::string getPhoneNumber() const;

private:
    std::string phoneNumber;
};

class AddressBookEntry
{
public:
    AddressBookEntry(const std::string &contactName,
                     const std::string &contactAddress,
                     const std::string &contactPhone);
    void displayContactInfo() const;

private:
    std::string contactName;
    std::string contactAddress;
    ContactPhoneNumber contactPhone;
    int timesConsultedCount;
};

#endif