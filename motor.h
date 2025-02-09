#ifndef MOTOR_H
#define MOTOR_H

#include <string>
using namespace std;

class Motor {
public:
    Motor(string tipMotora, int snagaMotora);
    int getSnaga() const;
    string getTip() const;
    void setSnaga(int snagaMotora); // Add this line

private:
    string tipMotora;
    int snagaMotora;
};

#endif