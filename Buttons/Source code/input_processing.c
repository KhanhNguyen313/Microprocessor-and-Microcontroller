/*
 * input_processing.c
 *
 *  Created on: Oct 4, 2021
 *      Author: Khanh
 */


#include "main.h"
#include "input_reading.h"
#include "mode_processing.h"
#include "global.h"

enum ButtonState{BUTTON_REALEASED, BUTTON_PRESSED, BUTTON_PRESSED_MORE_THAN_1S};

enum ButtonState buttonState[NO_OF_BUTTONS];

void init_processing(){
	for(unsigned char i = 0; i < NO_OF_BUTTONS; i++){
		buttonState[i] = BUTTON_REALEASED;
	}
}

void fsm_for_input_processing(void){
	for(unsigned char i = 0; i < NO_OF_BUTTONS; i++){
		switch(buttonState[i]){
		case BUTTON_REALEASED:
			if(is_button_pressed(i)){
				buttonState[i] = BUTTON_PRESSED;
				switch(i){
				case 0:
					increaseMode();
					break;
				case 1:
					increaseTimeDuration();
					break;
				case 2:
					setTimeDuration();
					break;
				default:
					break;
				}
			}
			break;
		case BUTTON_PRESSED:
			if(!is_button_pressed(i)){
				buttonState[i] = BUTTON_REALEASED;
			}
			else{
				if(is_button_pressed_1s(i)){
					buttonState[i] = BUTTON_PRESSED_MORE_THAN_1S;
				}
			}
			break;
		case BUTTON_PRESSED_MORE_THAN_1S:
			if(!is_button_pressed(i)){
				buttonState[i] = BUTTON_REALEASED;
			}
			break;
		default:
			break;
		}
	}
}
