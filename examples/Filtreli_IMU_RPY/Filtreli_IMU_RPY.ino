#include <Deneyap_Eksen.h>

LSM6DSM IMU;

float pitch, roll, yaw;

void setup() {

    Serial.begin(115200);
    IMU.begin(0x6B);
    calibrateRollPitchYaw();
}

void loop() {

    IMU.readRollPitchYaw(pitch, roll, yaw);
    Serial.print("X: ");
    Serial.println(pitch);
    Serial.print("Y: ");
    Serial.println(roll);
    Serial.print("Z: ");
    Serial.println(yaw);

    delay(20);
}