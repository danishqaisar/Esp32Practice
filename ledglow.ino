//LED pin defination
int pin =26;
      
void setup() {
pinMode (pin,OUTPUT);
}

void loop() {
 digitalWrite(pin,HIGH);
 delay(1000);
 digitalWrite(pin,LOW);
 delay(1000);
}
