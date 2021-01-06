int led = 11;
int pir = 6;
int buz = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode (led,OUTPUT);
  pinMode (pir,INPUT);
  pinMode (buz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (digitalRead(pir) == HIGH)
  {
       
    digitalWrite(led,HIGH);
    delay(200);
    digitalWrite(led,LOW);
    delay(200);
    digitalWrite(buz,HIGH);
    
  }

  else
  {
    digitalWrite(led,LOW);
    digitalWrite(buz,LOW);
  }
}
