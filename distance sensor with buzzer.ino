// C++ code
//
const int TrigPin=9;
const int EchoPin=10;
const int buzzPin=8;
long dur;
int dist;
void setup()
{
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TrigPin,LOW);
  delay(2); // Wait for 1000 millisecond(s)
  digitalWrite(TrigPin, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(TrigPin,LOW);
  dur = pulseIn(EchoPin, HIGH);
  dist = dur * 0.034 / 2;
  Serial.print(dist);
  Serial.println("cm");
  if(dist>65)
    digitalWrite(buzzPin,HIGH);

  else
    digitalWrite(buzzPin,LOW);
}
