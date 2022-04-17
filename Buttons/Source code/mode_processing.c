/*
 * mode_processing.c
 *
 *  Created on: Oct 7, 2021
 *      Author: Khanh
 */
#include "main.h"
#include "ouput_processing.h"
#include "timer.h"
#include "mode_processing.h"
#include "global.h"

const int durationLEDBlinky = 1000 / (2 * FREQUENCY_LED_BLINKING);

static int mode = 1;
static int timeDuration = 1;
static int initState = 0;

static int timeDurations[3] = {3, 2, 1};

static int count_1 = 0;
static int count_2 = 0;

static int status_LED_1 = 0; // 0: RED, 1: GREEN, 2: YELLOW
static int status_LED_2 = 1; // 0: RED, 1: GREEN, 2: YELLOW

static int indexSEG = 0;

void setTimeDuration(){
	int index = mode - 2;
	if(index < 0 || index >= 3) return;
	timeDurations[index] = timeDuration;
}

void increaseMode(){
	mode++;
	if(mode >= 5) mode = 1;
	initState = 0;
}

void increaseTimeDuration(){
	timeDuration++;
	if(timeDuration >= 100) timeDuration = 1;
}

void modeProcessing(){
	switch(mode){
	case 1:
		if(initState == 0){
			status_LED_1 = 0;
			status_LED_2 = 1;
			count_1 = timeDurations[status_LED_1];
			count_2 = timeDurations[status_LED_2];
			initState = 1;
			updateLED(status_LED_1, status_LED_2);
			setTimer0(1000);
		}
		else{
			if(getTimer0Flag() == 1){
				count_1--;
				count_2--;
				if(count_1 <= 0){
					status_LED_1++;
					if(status_LED_1 >= 3) status_LED_1 = 0;
					count_1 = timeDurations[status_LED_1];
				}
				if(count_2 <= 0){
					status_LED_2++;
					if(status_LED_2 >= 3) status_LED_2 = 0;
					count_2 = timeDurations[status_LED_2];
				}
				updateLED(status_LED_1, status_LED_2);
				setTimer0(1000);
			}
		}
		break;
	case 2:
		if(initState == 0){
			timeDuration = timeDurations[0];
			status_LED_1 = 0;
			status_LED_2 = 0;
			updateLED(status_LED_1, status_LED_2);
			setTimer0(durationLEDBlinky);
			initState = 1;
		}
		else{
			if(getTimer0Flag() == 1){
				toggleLED(status_LED_1, status_LED_2);
				setTimer0(durationLEDBlinky);
			}
		}
		count_1 = timeDuration;
		count_2 = mode;
		break;
	case 3:
		if(initState == 0){
			timeDuration = timeDurations[1];
			status_LED_1 = 1;
			status_LED_2 = 1;
			updateLED(status_LED_1, status_LED_2);
			setTimer0(durationLEDBlinky);
			initState = 1;
		}
		else{
			if(getTimer0Flag() == 1){
				toggleLED(status_LED_1, status_LED_2);
				setTimer0(durationLEDBlinky);
			}
		}
		count_1 = timeDuration;
		count_2 = mode;
		break;
	case 4:
		if(initState == 0){
			timeDuration = timeDurations[2];
			status_LED_1 = 2;
			status_LED_2 = 2;
			updateLED(status_LED_1, status_LED_2);
			setTimer0(durationLEDBlinky);
			initState = 1;
		}
		else{
			if(getTimer0Flag() == 1){
				toggleLED(status_LED_1, status_LED_2);
				setTimer0(durationLEDBlinky);
			}
		}
		count_1 = timeDuration;
		count_2 = mode;
		break;
	default:
		break;
	}
	if(getTimer1Flag() == 1){
		update7SEG(indexSEG, count_1, count_2);
		indexSEG++;
		if(indexSEG >= 2) indexSEG = 0;
		setTimer1(100);
	}
}
