/*

*/

void setup() {
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    
}

void loop() {
    analogWrite(11, 255);
    delay(1000);
    analogWrite(11, 110);
    delay(1000);
    analogWrite(11, 0);
    delay(1000);
    analogWrite(10, 255);
    delay(1000);
    analogWrite(10, 110);
    delay(1000);
    analogWrite(10, 0);
    delay(1000);
    analogWrite(9, 255);
    delay(1000);
    analogWrite(9, 110);
    delay(1000);
    analogWrite(9, 0);
    delay(1000);
}
