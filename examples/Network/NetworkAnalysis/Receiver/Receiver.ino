#include <PJON.h>

// Bus id definition
uint8_t bus_id[] = {0, 0, 0, 1};

// PJON object
PJON<SoftwareBitBang> bus(bus_id, 44);

void setup() {
  bus.set_pin(12);
  bus.begin();

  Serial.begin(115200);
};

void loop() {
  bus.receive();
};
