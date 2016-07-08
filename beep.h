//list the #includes

// state of the beeper
#define BEEPER_OFF	0
#define BEEPER_ON	1

// speeds of the beeps
#define NO_BEEP		0
#define SLOW_BEEP 	1
#define MEDIUM_BEEP	2
#define FAST_BEEP	3
#define ON_BEEP		4

class Beeper {
	public:
		Beeper();
		void SetBeepSpeed(byte speed);
		byte ReturnBeepSpeed();

		void SetBeepState(byte state);
		byte ReturnBeepState();

		void ToggleBeep();
		

		byte G_Beep_Speed;
		byte G_Beep_State;
		
		int G_Beep_Time;
		int G_Slow_Off_Time;
		int G_Medium_Off_Time;
		int G_Fast_Off_Time;

};
		










