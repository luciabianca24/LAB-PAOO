#ifndef MOTION_SENSOR_HPP
#define MOTION_SENSOR_HPP

#include <cstddef>

class MotionSensor
{
private:
    char *sensorName;
    float *accelerationData;
    size_t dataCount;

public:
    MotionSensor(const char *name, size_t count);
    ~MotionSensor();
    MotionSensor(const MotionSensor &other);
    MotionSensor(MotionSensor &&other) noexcept;
    void display() const;
};

#endif