/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PD2  //pin 2
  #define LEFT_ENC_PIN_B PD3  //pin 3
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PC4  //pin A4
  #define RIGHT_ENC_PIN_B PC5   //pin A5
#elif defined(ENCODER_LIBRARY)
  // Change these to the pins connected to your encoders.
  // Best Performance: both pins have interrupt capability
  // Good Performance: only the first pin has interrupt capability
  // Low Performance:  neither pin has interrupt capability

  // Avoid using pins with LEDs attached

  #define LEFT_ENC_PIN_A 18
  #define LEFT_ENC_PIN_B 19
  
  #define RIGHT_ENC_PIN_A 20
  #define RIGHT_ENC_PIN_B 21
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

