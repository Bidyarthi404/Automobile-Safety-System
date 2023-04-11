const int trigPin = 7;
const int echoPin = 4;
int IRSensor = 8;
//int buzzer = 5;
int buzz = 10;
long duration;
int distance;

void setup()
{
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  //Drowsiness
int sensor_status = digitalRead (IRSensor);

if (sensor_status == 1) {
Serial.println("No Obstacle Detected");
delay(100);

noTone(buzz); // Stop sound...

delay(100);
}
else
{
Serial.println("Obstacle Detected");
delay(100);

tone(buzz,1000); // Send 1KHz sound signal...

delay(100); // ...for 1 sec

noTone(buzz); // Stop sound...

delay(100);

}

  //ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;
  if (distance >= 35)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }

  if (distance < 27 && distance >= 17)
  {
    digitalWrite(2, HIGH);
    delay(600);
    digitalWrite(2, LOW);
    delay(600);

    digitalWrite(buzz, HIGH);
    tone(buzz, 2000);
    delay(400);
    noTone(buzz);
    delay(100);
    tone(buzz, 2000);
    delay(400);
    noTone(buzz);
    delay(50);
    tone(buzz, 2000);
    delay(400);
    noTone(buzz);
    delay(50);
    tone(buzz, 2000);
    delay(400);
    noTone(buzz);
    delay(50);
  }
  else
  {
    digitalWrite(2, LOW);
  }

  if(distance <= 17)

{

digitalWrite(2, HIGH);

tone(buzz, 2000);

delay(100);

noTone(buzz);

delay(100);

tone(buzz, 2000);

delay(100);

noTone(buzz);

delay(100);

tone(buzz, 2000);

delay(100);

noTone(buzz);

tone(buzz, 2000);

delay(100);

noTone(buzz);

delay(100);

}

else

{

digitalWrite(2, LOW); // turn the LED off by making the voltage LOW

// wait for a second

}

}