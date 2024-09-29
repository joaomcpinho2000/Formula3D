int potPin = A0;
int potVal = 0;

int redPin1 = 12;
int redPin2 = 10;
int redPin3 = 8;
int redPin4 = 6;

int grnPin1 = 13;
int grnPin2 = 11;
int grnPin3 = 9;
int grnPin4 = 7;

int redVal = 0;
int grnVal = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(redPin1, OUTPUT);
  pinMode(redPin2, OUTPUT);
  pinMode(redPin3, OUTPUT);
  pinMode(redPin4, OUTPUT);

  pinMode(grnPin1, OUTPUT);
  pinMode(grnPin2, OUTPUT);
  pinMode(grnPin3, OUTPUT);
  pinMode(grnPin4, OUTPUT);

  pinMode(potPin, INPUT);
}

// Main program
void loop()
{
  potVal = analogRead(potPin);

  if (potVal < 341)
  {
    analogWrite(redPin1, HIGH);
    analogWrite(redPin2, HIGH);
    analogWrite(redPin3, HIGH);
    analogWrite(redPin4, HIGH);
    analogWrite(grnPin1, LOW);
    analogWrite(grnPin2, LOW);
    analogWrite(grnPin3, LOW);
    analogWrite(grnPin4, LOW);
  }
  else if (potVal > 682)
  {
    analogWrite(redPin1, LOW);
    analogWrite(redPin2, LOW);
    analogWrite(redPin3, LOW);
    analogWrite(redPin4, LOW);
    analogWrite(grnPin1, HIGH);
    analogWrite(grnPin2, HIGH);
    analogWrite(grnPin3, HIGH);
    analogWrite(grnPin4, HIGH);
  }
  else
  {
    analogWrite(redPin1, LOW);
    analogWrite(redPin2, LOW);
    analogWrite(redPin3, LOW);
    analogWrite(redPin4, LOW);
    analogWrite(grnPin1, LOW);
    analogWrite(grnPin2, LOW);
    analogWrite(grnPin3, LOW);
    analogWrite(grnPin4, LOW);
  }

  delay(1);
}
