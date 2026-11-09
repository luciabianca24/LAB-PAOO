#include "Item5.hpp"

void SensorReading::print() const
{
    std::cout << "[SensorReading] Value: " << value << ", Timestamp: " << timestamp << "\n";
}

SecureDevice::SecureDevice(std::string &status, int id)
    : deviceStatus_(status), deviceId_(id)
{
}

void SecureDevice::updateStatus(const std::string &newStatus)
{
    deviceStatus_ = newStatus;
}

void SecureDevice::print() const
{
    std::cout << "[SecureDevice] ID: " << deviceId_ << ", Status: " << deviceStatus_ << "\n";
}