/*
  Larrow
 
  Lights multiple LEDs in sequence, then in reverse.
 
  The circuit:
  * Pins 2 thru 11 go to modules that have resistor connect to transistor that drives the 12 volts out.
 
  Create by: UrineMax
  Date: 9/20/2018
   
  
  Hardware Required:
  * MSP-EXP430G2 LaunchPad
  * (12) 1K ohm resistors
  * (12) 2n222 transistors
  * (12) Screw Terminals
  * (2) Round plug terminals for 12V
  * (3) breadboards, one for piggy back on Launchpad and then 2 for 6 LED modules
 
*/

int timer = 100;           // The higher the number, the slower the timing.

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 2; thisPin < 13; thisPin++)  {
    pinMode(thisPin, OUTPUT);      
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  for (int thisPin = 2; thisPin < 11; thisPin++) { 
    // turn the pin on:
    digitalWrite(thisPin, HIGH);   
    delay(timer);                  
    // turn the pin off:
    digitalWrite(thisPin, LOW);  
  }

}
