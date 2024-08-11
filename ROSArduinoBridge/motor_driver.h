/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

#elif defined BTS7960_MOTOR_DRIVER

  // Driver for left motor
  #define L_EN_LEFT 2
  #define R_EN_LEFT 4
  #define L_PWM_LEFT 5
  #define R_PWM_LEFT 6

  //Driver for right motor
  #define L_EN_RIGHT 2
  #define R_EN_RIGHT 4
  #define L_PWM_RIGHT 5
  #define R_PWM_RIGHT 6

#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
