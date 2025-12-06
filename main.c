#include <stdio.h>

// Simple steering diagnostics tool example
// Checks torque and angle sensor values against thresholds and prints warnings

#define TORQUE_THRESHOLD 5.0f
#define ANGLE_THRESHOLD 30.0f

int main(void) {
    float torqueSensors[] = {4.5f, 5.5f, 3.2f};
    float angleSensors[]  = {20.0f, 35.0f, 25.0f};
    int numSensors = sizeof(torqueSensors) / sizeof(torqueSensors[0]);

    for (int i = 0; i < numSensors; i++) {
        float torque = torqueSensors[i];
        float angle  = angleSensors[i];
        printf("Sensor %d: torque = %.1f Nm, angle = %.1f degrees\n", i + 1, torque, angle);

        if (torque > TORQUE_THRESHOLD) {
            printf("  WARNING: Torque exceeds threshold!\n");
        }
        if (angle > ANGLE_THRESHOLD) {
            printf("  WARNING: Angle exceeds threshold!\n");
        }
    }

    return 0;
}
