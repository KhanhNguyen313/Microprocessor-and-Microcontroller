/*
 * scheduler.h
 *
 *  Created on: Oct 20, 2021
 *      Author: Khanh
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

void SCH_Init(void);
void SCH_Update(void);
uint32_t SCH_Add_Task(void(*)(), uint32_t, uint32_t);
uint32_t SCH_Delete_Task(uint32_t);
void SCH_Dispatch_Tasks(void);

#endif /* INC_SCHEDULER_H_ */
