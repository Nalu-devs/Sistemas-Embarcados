int LED = 9;
int LED2 = 1;
int LED3 = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
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
  digitalWrite(LED3, HIGH);//high liga a porta
  delay(500);
  digitalWrite(LED3, LOW);//low desliga a porta
  delay(500);
}
