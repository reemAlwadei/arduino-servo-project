#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {

  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);

}

void loop() {

  // Sweep all servo motors for about 2 seconds

  for (int angle = 0; angle <= 180; angle += 10) {

    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);

    delay(53);
  }

  for (int angle = 180; angle >= 0; angle -= 10) {

    servo1.write(angle);
    servo2.write(angle);
    servo3.write(angle);
    servo4.write(angle);

    delay(53);
  }

  // Hold all servo motors at 90 degrees

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  while (true);

}
