// C++ code
//
void setup()
{
  pinMode(23, OUTPUT); // função de sída do pino preso.
}

void loop()
{
  digitalWrite(23, HIGH); //ascende o LED.
  delay(500); // Tempo que será executado
  digitalWrite(23, LOW); // apaga o LED.
  delay(500); // Tempo que será executado
}
