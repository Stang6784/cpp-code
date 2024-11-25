int led[] = {17, 2, 15, 12};
int adc = 36;

void setup() {
  Serial.begin(9600);
  for(int i=0; i<=3; i++){
  pinMode(led[i], OUTPUT);
  }
  
}

void loop() {
  int LDR = analogRead(adc);
  Serial.println(LDR);
  int ledIndex = map(LDR, 0, 1023, 0, 3);
  Serial.println(ledIndex);   
  digitalWrite(led[ledIndex], LOW);
  delay(50);
  for(int i=0; i<=3; i++){
  digitalWrite(led[i], HIGH);
  }
}

