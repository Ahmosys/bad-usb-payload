#include <KeyboardAzertyFr.h>

void setup() {

  
  KeyboardAzertyFr.begin();

  delay(2000);

  // Press Windows + r
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.press('r');
  KeyboardAzertyFr.releaseAll();

  delay(200);

  // Print + Return (open notepad)
  KeyboardAzertyFr.print("notepad.exe");
  typeKey(KEY_RETURN);

  delay(800);

  // Print + Return
  KeyboardAzertyFr.print("          , ,\\ ,'\\,'\\ ,'\\ ,\\ ,");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("    ,  ,\\/ \\' `'     `   '  /|");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("    |\\/                      |");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("    :                        |");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("    :                        |");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("     |                       |");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("     |                       |");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("     :               -.     _|");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("     :                \\     `.");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("     |         ________:______\\");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("     :       ,'o       / o    ,");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("     :       \\       ,'-----./");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("      \\_      `--.--'        )");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("     ,` `.              ,---'|");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("     : `                     |");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("      `,-'                   |");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("      /      ,---.          ,'");
  typeKey(KEY_RETURN);
  
  // Print + Return
  KeyboardAzertyFr.print("   ,-'            `-,------'");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("   `.        ,--'");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("     `-.____/");
  typeKey(KEY_RETURN);

  // Print + Return
  KeyboardAzertyFr.print("            \\");
  typeKey(KEY_RETURN);

  delay(800);

}

void typeKey(int key)
{
  KeyboardAzertyFr.press(key);
  delay(50);
  KeyboardAzertyFr.release(key);
}

// Nothing here
void loop() {}
