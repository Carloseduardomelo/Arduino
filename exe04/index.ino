
void setup() {
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(2, OUTPUT);
}

void loop() {
    digitalWrite(13, HIGH);
    digitalWrite(7, HIGH);
    delay(5000);
    digitalWrite(13, LOW);
    digitalWrite(7, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    digitalWrite(4, HIGH);
    delay(5000);
    digitalWrite(12, LOW);
    digitalWrite(4, LOW);
    delay(500);
    digitalWrite(8, HIGH);
    digitalWrite(2, HIGH);
    delay(5000);
    digitalWrite(8, LOW);
    digitalWrite(2, LOW);
    delay(500);
    digitalWrite(13, HIGH);
    digitalWrite(2, HIGH);
    analogWrite(9, 255);
    delay(5000);
    digitalWrite(13, LOW);
    digitalWrite(2, LOW);
    analogWrite(9, 0);
}