#include <Servo.h>
Servo myServo;

int pos=0;
void setup() {
  // put your setup code here, to run once:
myServo.attach(5);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos=0;pos<=180;pos+=1)
  myServo.write(pos);
  delay(15);
   for(pos=0;pos>=180;pos-=1)
  myServo.write(pos);
  delay(15);


}
