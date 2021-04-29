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
  KeyboardAzertyFr.press('r');
  KeyboardAzertyFr.releaseAll();

  delay(400);

  // Print (open chrome)
  KeyboardAzertyFr.print("chrome");
  typeKey(KEY_RETURN);
  
  delay(1000);

  // Press CTRL + Windows + Up arrow (Ensures that chrome is open in full screen mode)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  KeyboardAzertyFr.press(KEY_UP_ARROW );
  KeyboardAzertyFr.releaseAll();

  delay(400);

  // Print (go to chrome settings)
  KeyboardAzertyFr.print("chrome://settings/");
  typeKey(KEY_RETURN);
  
  delay(400);

  // Print (search for the section related to chrome startup)(If you are EN change the word to "startup" instead of "demarrage")
  KeyboardAzertyFr.print("demarrage");
  typeKey(KEY_RETURN);
  
  delay(400);

  // Press the TAB key 3 times
  typeKeyTime(KEY_TAB, 3);

  delay(400);

  // Press the down arrow key 2 times
  typeKeyTime(KEY_DOWN_ARROW, 2);

  delay(400);

  // Press Tab
  typeKey(KEY_TAB);
  
  delay(400);

  // You can change the "i", it is also at 10 but you can put the number you want, 
  // it will determine the number of tabs open, at the opening of chrome, 
  // if you put 10 then at the start of chrome, 10 tabs will be open simultaneously from the same site.
  for (int i = 0; i < 10; i++)
  {
    typeKey(KEY_RETURN);
    KeyboardAzertyFr.print("YOUR_SITE_HERE");
    delay(100);
    typeKey(KEY_RETURN);
    delay(400);
  }
  
  // Press CTRL + w (close chrome)
  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press('w');
  KeyboardAzertyFr.releaseAll();
  
}


// Function pressing the key a given number of times.
void typeKeyTime(int key, int number)
{
  for (int i = 0; i < number; i++)
  {
    KeyboardAzertyFr.press(key);
    delay(50);
    KeyboardAzertyFr.release(key);
    delay(200);
  }
}

void typeKey(int key)
{
    KeyboardAzertyFr.press(key);
    delay(50);
    KeyboardAzertyFr.release(key);
}

// Nothing here
void loop() {}
