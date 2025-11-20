#include "VehicleDetector.h"

VehicleDetector::VehicleDetector(uint8_t pin)
    : _pin(pin)
{
}

void VehicleDetector::begin() {
    pinMode(_pin, INPUT);
}

bool VehicleDetector::isVehicleDetected() {
    // Le capteur donne 0 V => LOW => véhicule présent
    return (digitalRead(_pin) == LOW);
}

int VehicleDetector::readRaw() {
    return digitalRead(_pin);
}
