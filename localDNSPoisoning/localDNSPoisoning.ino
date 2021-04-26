#include <KeyboardAzertyFr.h>

// Init function
void setup()
{
  // Begining the stream
  KeyboardAzertyFr.begin();
  
  // Waiting 500ms for init
  delay(500);

  delay(3000);

  // Press Windows
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.releaseAll();

  delay(400);

  // Print
  KeyboardAzertyFr.print("cmd");

  delay(400);

  // Press CTRL + SHIFT + ENTER (open cmd with admin perm)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

  delay(400);

  // Press Alt + o (agrees to be an administrator)
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.press('o');
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // Jump one line in the host file
  KeyboardAzertyFr.print("ECHO. >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // If you want to block a particular site you just have to copy this block and put the domain name of your choice.
  // Adds a line to the host file (block YouTube)
  KeyboardAzertyFr.print("ECHO 127.0.0.1 www.youtube.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // Adds a line to the host file (block Facebook www subdomain)
  KeyboardAzertyFr.print("ECHO 127.0.0.1 www.facebook.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // Adds a line to the host file (block Facebook)
  KeyboardAzertyFr.print("ECHO 127.0.0.1 facebook.com >> C:/WINDOWS/SYSTEM32/DRIVERS/ETC/HOSTS");
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // Press ALT + F4 (close cmd)
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.press(KEY_F4);
  KeyboardAzertyFr.releaseAll();

}

void typeKey(int key)
{
  KeyboardAzertyFr.press(key);
  delay(50);
  KeyboardAzertyFr.release(key);
}

// Nothing here
void loop() {}
