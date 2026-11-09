#ifndef ITEM5_HPP
#define ITEM5_HPP

#include <string>
#include <iostream>

// Clasa simplă pentru care compilatorul generează automat funcțiile
class SensorReading
{
public:
    int value = 0;
    double timestamp = 0.0;

    void print() const; // Doar declarație
};

// Clasa cu membru referință și membru const
class SecureDevice
{
private:
    std::string &deviceStatus_;
    const int deviceId_;

public:
    SecureDevice(std::string &status, int id); // Doar declarație

    void updateStatus(const std::string &newStatus); // Doar declarație
    void print() const;                              // Doar declarație
};

#endif