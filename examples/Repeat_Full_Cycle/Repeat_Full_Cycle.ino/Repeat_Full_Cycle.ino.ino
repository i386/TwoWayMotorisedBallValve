#include <TwoWayMotorisedBallValve.h>

volatile bool TwoWayMotorisedBallValve::openLimitReached;
volatile bool TwoWayMotorisedBallValve::closeLimitReached;
uint8_t TwoWayMotorisedBallValve::openLimitPin;
uint8_t TwoWayMotorisedBallValve::closeLimitPin;

uint8_t motorSpeedPin = 10;
uint8_t openValvePin = 12;
uint8_t closeValvePin = 13;
uint8_t fullyOpenedPin = 2;
uint8_t fullyClosedPin = 3;

TwoWayMotorisedBallValve valve;

double valveSetPoint;

unsigned long lastRandom = 0;

void setup ()
{

  Serial.begin(9600);
  valve.begin(&valveSetPoint, openValvePin, closeValvePin, motorSpeedPin, fullyOpenedPin, fullyClosedPin);

}

void loop ()
{

  valve.fullyOpen();
  valve.fullyClose();

}
