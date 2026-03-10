
#define ECHO 3
#define TRIG 2
int distance;
long duration;
void setup() {
  pinMode(INPUT,ECHO);
  pinMode(OUTPUT,TRIG);
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(2);
  digitalWrite(TRIG, LOW);
  delayMicroseconds(10);
  digitalWrite(TRIG, HIGH);
  duration=pulseIn(ECHO,HIGH);
  distance = duration * 0.039 / 2;

  Serial.print("duration :");
  Serial.print(distance);
  Serial.print("cm\n");


  // put your main code here, to run repeatedly:

}
