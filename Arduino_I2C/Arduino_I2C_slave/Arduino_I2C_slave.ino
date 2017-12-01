#include <Wire.h>

void setup() {
  Wire.begin(8);                //Inicializa el bus I2C con la dirección 8 para el Arduino
  Wire.onReceive(receiveEvent); // Registro del evento
  Serial.begin(9600);           // Inicializa la comunicación serial a 9600 baudios
}

void loop() {}

  void receiveEvent(int howMany) { //Cada vez que se recibe
  while (1 < Wire.available()) {
    char c = Wire.read(); // Recibe el byte como caracter
    Serial.write(c); // Imprime el caracter por serial
  }
  int x = Wire.read();// Redundancia
  Serial.write(x);         
}
