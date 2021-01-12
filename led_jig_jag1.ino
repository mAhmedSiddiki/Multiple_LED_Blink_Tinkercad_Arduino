int led1 = 13, led2 = 12;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)  
  
  digitalWrite(led2, HIGH);
  delay(1000);
  
  digitalWrite(led1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led2, LOW);
  delay(1000);
}
