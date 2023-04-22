//Sensor de temperatura usando o LM35
const int LM35 = A5; // Define o pino que lera a saída do LM35
float lm35Temperatura1; // Variável que armazenará a temperatura medida

//Função que será executada uma vez quando ligar ou resetar o Arduino
void setup() {
  Serial.begin(9600);
}

//Função que será executada continuamente
void loop() {
  lm35Temperatura1 = (float(analogRead(LM35))*5/(1023))/0.01; //Aqui é onde o dado é transformado em graus C°
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.print(lm35Temperatura1);	//4 'Serial.print', pois no Painel Geral da dashboard temos 4 graficos que capturam o mesmo dado
  Serial.print(";");			// por ser o mesmo arduino.
  Serial.print(lm35Temperatura1);
  Serial.print(";");
  Serial.println("");
  delay(2000);   //O delay correto para não sobrecarregar o nosso banco de dados, é de 1800000 (30 minutos). E também é um valor que
		//de acordo com o Marcelo (responsável pela cervejaria Taru), "seria um valor adequado para estar salvando as temperaturas"
}