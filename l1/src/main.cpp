#include "MotionSensor.hpp"
#include <iostream>
#include <utility>

int main()
{
    std::cout << "--- STEP 1: Creating an object ---\n";
    MotionSensor sensorA("SensorA", 3);
    sensorA.display();

    std::cout << "\n--- STEP 2: Copying the object ---\n";
    MotionSensor sensorB = sensorA;
    sensorB.display();

    std::cout << "\n--- STEP 3: Moving the object ---\n";
    MotionSensor sensorC = std::move(sensorA);

    std::cout << "State of sensor A (after move):\n";
    sensorA.display();

    std::cout << "State of sensor C:\n";
    sensorC.display();

    std::cout << "\n--- STEP 4: End of program ---\n";
    return 0;
}