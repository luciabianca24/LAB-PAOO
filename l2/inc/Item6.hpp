#ifndef ITEM6_HPP
#define ITEM6_HPP

#include <string>

// Represents a unique property for sale that shouldn't be copied
class HomeForSale
{
public:
    HomeForSale(const std::string &address);
    void display() const;

    // ITEM 6 CORE LESSON:
    // Explicitly disallow copying by marking copy constructor and copy assignment operator as '= delete'.
    HomeForSale(const HomeForSale &) = delete;
    HomeForSale &operator=(const HomeForSale &) = delete;

private:
    std::string address;
};

#endif