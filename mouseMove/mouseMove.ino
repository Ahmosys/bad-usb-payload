#include <Mouse.h>

// Init function
void setup() 
{
  // Begining the stream
  Mouse.begin();
  delay(800);
}

void loop() 
{
  // Variable declaration
  int xvar = random(-1000, 1000);
  int yvar = random(-1000, 1000);
  
  Mouse.move(xvar, yvar);
  
  delay(20);
  
}
