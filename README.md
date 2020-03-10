# TTGO_USB Virtual keyboard Demo

Keyboard.begin();//init

eyboard.press(KEY_LEFT_GUI);//Win button

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
