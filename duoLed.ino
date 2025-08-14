int LED = 9;
int LED2 = 1;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);//high liga a porta
  delay(500);
  digitalWrite(LED, LOW);//low desliga a porta
  delay(500); 
  digitalWrite(LED2, HIGH);//high liga a porta
  delay(500);
  digitalWrite(LED2, LOW);//low desliga a porta
  delay(500); 
}
