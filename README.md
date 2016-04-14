# ArduinoTimer
Library for a timer that can be used in the Arduino IDE
You can create a timer by initialising it with:
IntervalTimer timer = IntervalTimer(100);
Where 100 stands for the time in milliseconds that the timer should be counting.

Whenever you call timeOver() on your timer, so timer.timeOver(), it will return a value stating true or false.
If the time was over, the timer will automatically reset itself.

If you need to reset the timer manually, you can call timer.reset().
This will reset the timer so it starts counting from 0 again.

When you expect to use the Arduino with more than 50 days uptime, you should look further.
The article here: https://www.arduino.cc/en/Reference/Millis states that the millis timer will overflow at approximately 50 days, so at that point
this library will stop working, and only work again after a reset of the Arduino.
