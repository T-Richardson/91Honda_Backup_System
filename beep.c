//list the #includes

#include "beep.h"


Beeper::Beeper() {
	G_Beep_Speed = 0; // no beeps
	G_Beep_State = 0; //beeper off

	G_Beep_Time = 500; // this should be in milliseconds, length beep is on

	//length of time between beeps
	G_Slow_Off_Time = 750;
	G_Medium_Off_Time = 500;
	G_Fast_Off_Time = 250;

}

void Beeper::SetBeepSpeed(byte speed) {
	G_Beep_Speed = speed;
}

byte Beeper::ReturnBeepSpeed() {
	return G_Beep_Speed;
}

void Beeper::SetBeepState(byte state) {
	G_Beep_State = state;
}

byte Beeper:: ReturnBeepState() {
	return G_Beep_State;
}

// sets the pin high or low based on state of the beeper
//call this when the interrupt is over to turn on/off sound
void Beeper:: ToggleBeep() {

	if(G_Beep_State == 0) { 
	//beeper is off, turn it on

	G_Beep_State = 1;
	
	} else {
	//beeper is on, turn it off
	
	G_Beep_State = 0;
	}

}










