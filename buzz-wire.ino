int highAlertPin = 4;
int highOKPin = 2;
int d = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(highOKPin, OUTPUT);
  pinMode(highAlertPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(highOKPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(d);                       // wait for a second
  digitalWrite(highOKPin, LOW);    // turn the LED off by making the voltage LOW
  delay(d);
}
