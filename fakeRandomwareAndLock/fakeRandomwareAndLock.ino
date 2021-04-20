#include <KeyboardAzertyFr.h>

void setup() {
  // Begining the stream
  KeyboardAzertyFr.begin();

  // Waiting 200ms for init
  delay(2000);

  // Press Windows
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  // Press r
  KeyboardAzertyFr.press('r');
  // Realease these keys
  KeyboardAzertyFr.releaseAll();

  // Waiting 250ms
  delay(250);

  // Type the command in Run (run internet explore and put it in full screen)
  // Another url : https://fakeupdate.net/
  KeyboardAzertyFr.print("iexplore -k https://fakeupdate.net/wnc/");

  // Press enter
  typeKey(KEY_RETURN);

  // Waiting 200ms
  delay(200);

  // Lock the PC
  // Press Windows
  KeyboardAzertyFr.press(KEY_LEFT_GUI);
  
  // Press l
  KeyboardAzertyFr.press('l');
  
  // Realease these keys
  KeyboardAzertyFr.releaseAll();

}

// Function for type a key
void typeKey(int key)
{
  KeyboardAzertyFr.press(key);
  delay(50);
  KeyboardAzertyFr.release(key);
}

void loop() {
  // Nothing here

}
