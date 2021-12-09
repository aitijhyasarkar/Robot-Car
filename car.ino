int s = 150;
char v;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(9, s);
  analogWrite(10, s);
  if (Serial.available())
  {
    v = Serial.read();
  }
  if (v == 'S')
  {
    digitalWrite(2, LOW); //stop
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else if (v == 'F')
  {
    digitalWrite(2, LOW); //forward
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
  else if (v == 'B')
  {
    digitalWrite(2, HIGH); //backward
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else if (v == 'R')
  {
    digitalWrite(2, HIGH); //right
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
  else if (v == 'L')
  {
    digitalWrite(2, LOW); //left
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else if (v == '0')
  {
    s = 0;
  }
  else if (v == '1')
  {
    s = 30;
  }
  else if (v == '2')
  {
    s = 30;
  }
  else if (v == '3')
  {
    s = 90;
  }
  else if (v == '4')
  {
    s = 120;
  }
  else if (v == '5')
  {
    s = 150;
  }
  else if (v == '6')
  {
    s = 180;
  }
  else if (v == '7')
  {
    s = 210;
  }
  else if (v == '8')
  {
    s = 240;
  }
  else if (v == '9')
  {
    s = 255;
  }
  else if (v == 'W')
  {
    digitalWrite(13, HIGH);
  }
  else if (v == 'w')
  {
    digitalWrite(13, LOW);
  }
  else if (v == 'V')
  {
    tone(12, 179);
  }
  else if (v == 'v')
  {
    noTone(12);
  }
  else if (v == 'G')
  {
    analogWrite(9, s);
    analogWrite(10, s - 155);
    digitalWrite(2, LOW); //forward
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
  else if (v == 'I')
  {
    analogWrite(9, s - 155);
    analogWrite(10, s);
    digitalWrite(2, LOW); //forward
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  }
  else if (v == 'H')
  {
    analogWrite(9, s);
    analogWrite(10, s - 155);
    digitalWrite(2, HIGH); //backward
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else if (v == 'J')
  {
    analogWrite(9, s - 155);
    analogWrite(10, s);
    digitalWrite(2, HIGH); //backward
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }
  else if (v == 'U')
  {
    digitalWrite(11, HIGH);
  }
  else if (v == 'u')
  {
    digitalWrite(11, LOW);
  }
}
/*void siren(void) {
  for (int x = 0; x < 180; x++) {
    float sinVal = (sin(x * (3.1412 / 180)));
    int toneVal = 2000 + (int(sinVal * 1000));
    tone(12, toneVal);
    delay(4);
  }
}*/
