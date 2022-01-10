#include <Keyboard.h>
void setup() {//init
  Keyboard.begin();//Start keyboard communication 
  delay(3000);//Delay
  Keyboard.press(KEY_LEFT_GUI);//win Button
  delay(500); 
  Keyboard.press('r');//R Button//Win+R
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_RETURN);//enter Button
  delay(500);
  Keyboard.release(KEY_RETURN);
  delay(500); 
  Keyboard.println("shutdown -s -f -t 0"); //Shutdown
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();
}
void loop()
{
}
