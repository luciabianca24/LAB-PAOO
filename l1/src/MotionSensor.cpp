#include "MotionSensor.hpp"
#include <iostream>
#include <cstring>

MotionSensor::MotionSensor(const char *name, size_t count) : dataCount(count)
{
    size_t nameLen = std::strlen(name);
    sensorName = new char[nameLen + 1];
    std::strcpy(sensorName, name);

    accelerationData = new float[dataCount];
    for (size_t i = 0; i < dataCount; ++i)
    {
        accelerationData[i] = static_cast<float>(i) * 9.8f;
    }
    std::cout << "[Constructor] Sensor \"" << sensorName << "\" created on the heap.\n";
}

MotionSensor::~MotionSensor()
{
    if (sensorName != nullptr)
    {
        std::cout << "[Destructor] Releasing heap memory for sensor: " << sensorName << "\n";
        delete[] sensorName;
        sensorName = nullptr;
    }
    if (accelerationData != nullptr)
    {
        delete[] accelerationData;
        accelerationData = nullptr;
    }
}

MotionSensor::MotionSensor(const MotionSensor &other) : dataCount(other.dataCount)
{
    size_t nameLen = std::strlen(other.sensorName);
    sensorName = new char[nameLen + 1];
    std::strcpy(sensorName, other.sensorName);
    accelerationData = new float[dataCount];
    for (size_t i = 0; i < dataCount; ++i)
    {
        accelerationData[i] = other.accelerationData[i];
    }
    std::cout << "[Copy Constructor] Deep Copy created for: " << sensorName << "\n";
}

MotionSensor::MotionSensor(MotionSensor &&other) noexcept
    : sensorName(other.sensorName), accelerationData(other.accelerationData), dataCount(other.dataCount)
{

    std::cout << "[Move Constructor] Memory successfully transferred from temporary object.\n";
    other.sensorName = nullptr;
    other.accelerationData = nullptr;
    other.dataCount = 0;
}

void MotionSensor::display() const
{
    if (sensorName != nullptr)
    {
        std::cout << "-> " << sensorName << " has " << dataCount << " acceleration values.\n";
    }
    else
    {
        std::cout << "-> Empty sensor.\n";
    }
}