#include "Item6.hpp"
#include <iostream>

HomeForSale::HomeForSale(const std::string &addr) : address(addr) {}

void HomeForSale::display() const
{
    std::cout << "[Item 6] Home listed at address: " << address << "\n";
}