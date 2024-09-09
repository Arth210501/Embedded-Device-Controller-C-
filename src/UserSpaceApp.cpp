#include <iostream>

// Function prototypes (simulating interaction with DeviceDriver.cpp)
extern int readSensorData();

int main() {
    std::cout << "Starting user space application...\n";

    // Simulate reading data from the device
    int status = readSensorData();

    if (status == 0) {
        std::cout << "User-space application completed successfully!" << std::endl;
    } else {
        std::cerr << "Error occurred in the user-space application!" << std::endl;
    }

    return 0;
}
