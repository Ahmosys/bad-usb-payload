// You can set yourself the delay you want by testing, the delay here is always the same.

#include <KeyboardAzertyFr.h>

// Init function
void setup()
{
  // Begining the stream
  KeyboardAzertyFr.begin();
  
  // Waiting 500ms for init
  delay(500);

  delay(3000);

  // Press Windows + r
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.press('r');
  KeyboardAzertyFr.releaseAll();

  delay(100);

  // Print 
  KeyboardAzertyFr.print("iexplore http://s3.amazonaws.com/rapgenius/hotdog.jpg");
  // Press Return (enter)
  typeKey(KEY_RETURN);

  delay(5000); // Depend of the connexion (loading page)
  
  // Press Ctrl + s
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('s');
  KeyboardAzertyFr.releaseAll();

  delay(1000);
  
  // Press Ctrl + l
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('l');
  KeyboardAzertyFr.releaseAll();

  // Print + Press Return
  KeyboardAzertyFr.print("%USERPROFILE%");
  typeKey(KEY_RETURN);

  delay(1000);

  // Press Alt + e (save)
  KeyboardAzertyFr.press(KEY_LEFT_ALT);
  KeyboardAzertyFr.press('e');
  KeyboardAzertyFr.releaseAll();

  delay(1000);

  // Press Windows + r
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.press('r');
  KeyboardAzertyFr.releaseAll();

  delay(1000);
  
  // Print + Press Return
  KeyboardAzertyFr.print("%USERPROFILE%");
  typeKey(KEY_RETURN);

  delay(1000);
  
  // Press Ctrl + f
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('f');
  KeyboardAzertyFr.releaseAll();
  
  delay(1000);
  // Print 
  KeyboardAzertyFr.print("hotdog");
  
  delay(1000);
  
  // Press Return
  typeKey(KEY_RETURN);
  
  delay(1000);
  
  // Press Tabulation
  KeyboardAzertyFr.press(KEY_TAB);
  KeyboardAzertyFr.releaseAll();

  delay(1000);
  
  // Press Down Arrow
  KeyboardAzertyFr.press(KEY_DOWN_ARROW);
  KeyboardAzertyFr.releaseAll();
  
  delay(1000);
  
  // Press Shift + F10 (Right click)
  KeyboardAzertyFr.press(KEY_LEFT_SHIFT);
  KeyboardAzertyFr.press(KEY_F10);
  KeyboardAzertyFr.releaseAll();

  delay(1000);
  
  // Press b
  KeyboardAzertyFr.press('b');
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
