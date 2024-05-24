#define led 21
#define button 0

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) {
    int var1 = 1;

    while (var1 > 0) {
      digitalWrite(led, HIGH);

      if (digitalRead(button) == HIGH) {
        digitalWrite(led , LOW);
        var1 = 0 ;
      }
    }
  }
    
}
