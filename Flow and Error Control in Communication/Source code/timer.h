/*
 * timer.h
 *
 *  Created on: Nov 6, 2021
 *      Author: Khanh
 */
#include "main.h"

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

void setTimer0(int);
void setTimer1(int);
void timer_run(void);
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *);
int getTimer0Flag(void);
int getTimer1Flag(void);
void stopTimer0();

#endif /* INC_TIMER_H_ */
