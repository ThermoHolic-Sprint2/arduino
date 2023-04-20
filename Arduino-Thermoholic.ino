//Sensor de temperatura usando o LM35
const int LM35 = A5; // Define o pino que lera a saída do LM35
float lm35Temperatura1; // Variável que armazenará a temperatura medida

//Função que será executada uma vez quando ligar ou resetar o Arduino
void setup() {
  Serial.begin(9600);
}

//Função que será executada continuamente
void loop() {
  lm35Temperatura1 = (float(analogRead(LM35))*5/(1023))/0.01;
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.println("");
  delay(2000);
}
