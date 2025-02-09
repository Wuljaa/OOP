#include "motor.h"

Motor::Motor(string tipMotora, int snagaMotora) : tipMotora(tipMotora), snagaMotora(snagaMotora) {}

int Motor::getSnaga() const {
    return snagaMotora;
}

string Motor::getTip() const {
    return tipMotora;
}

void Motor::setSnaga(int snagaMotora) { 
    this->snagaMotora = snagaMotora;
}