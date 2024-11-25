int adc = 36;
int pwn = 13;

void setup() {
  Serial.begin(9600);

}

void loop() {
  // Serial.println("Hello World");
  // Serial.println("Stang");
  // Serial.println("--------------------------");
    int LDR = analogRead(adc);
    Serial.println(LDR);  
    int val = map(LDR, 0,1023, 255,0);
    analogWrite(pwn,val);  
  delay(500);
}
