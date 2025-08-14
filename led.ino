int LED = 9;
void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);//high liga a porta
  delay(500);
  digitalWrite(LED, LOW);//low desliga a porta
  delay(500); 
}
