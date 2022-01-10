# TTGO_USB Virtual keyboard Demo

## 1.Download arduino ide

Download and install the arduino software: https://www.arduino.cc/en/software

## 2.Install driver
Steps to install the product driver: https://www.arduino.cc/en/Guide/DriverInstallation

## 3.Demo Code

Keyboard.begin();//init

Keyboard.press(KEY_LEFT_GUI);//Win button

delay(500);

Keyboard.release(KEY_LEFT_GUI);

Keyboard.press(KEY_RETURN);//Enter button

delay(500);
  
Keyboard.release(KEY_RETURN);

eyboard.press(KEY_LEFT_GUI);//win + d --- return desktop

delay(500);

Keyboard.press('d');

delay(500);

Keyboard.release(KEY_LEFT_GUI);
