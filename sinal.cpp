// C++ code
//
int counter;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  // Reset geral
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  // Abrir carros, fechar pedestre
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);
  delay(7000); // Wait for 7000 millisecond(s)
  digitalWrite(11, LOW);
  // Iniciar amarelo
  digitalWrite(12, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(12, LOW);
  // Apagar amarelo, abrir pedestre
  digitalWrite(4, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(3, LOW);
  // Iniciar piscada vermelha (pedestre)
  for (counter = 0; counter < 4; ++counter) {
    digitalWrite(4, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(4, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
}
