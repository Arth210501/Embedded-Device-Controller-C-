#include <iostream>
#include <cstdlib>  // For rand()

// Simulate reading sensor data
int readSensorData() {
    // Simulate reading temperature data between 20°C and 30°C
    int temperature = 20 + (rand() % 11);  // Generates a random temperature between 20 and 30
    std::cout << "Simulated sensor data: " << temperature << "°C" << std::endl;

    return 0;  // Return 0 to indicate success
}
