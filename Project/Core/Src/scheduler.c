/*
 * scheduler.c
 *
 *  Created on: Oct 23, 2024
 *      Author: Hai
 */

#include "scheduler.h"

sTasks SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task = 0; //qlý các task in array xem empty or full position

void SCH_Init(void) {
	current_index_task = 0;
}

void SCH_Add_Task( void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD) {
	if (current_index_task < SCH_MAX_TASKS) {
		SCH_tasks_G[current_index_task].pTask = pFunction;
		SCH_tasks_G[current_index_task].Delay = DELAY / TICK;
		SCH_tasks_G[current_index_task].Period = PERIOD / TICK;
		SCH_tasks_G[current_index_task].RunMe = 0;

		SCH_tasks_G[current_index_task].TaskID = current_index_task;

		++current_index_task;
	}
}

void SCH_Delete_Task(uint32_t ID) {
	if (current_index_task > ID) {
		for (int i = ID; i < current_index_task - 1; ++i){
			SCH_tasks_G[i].pTask = SCH_tasks_G[i + 1].pTask;
			SCH_tasks_G[i].Delay = SCH_tasks_G[i + 1].Delay;
			SCH_tasks_G[i].Period = SCH_tasks_G[i + 1].Period;
			SCH_tasks_G[i].RunMe = SCH_tasks_G[i + 1].RunMe;
		}
		--current_index_task;
	}
}

void SCH_Update(void) {
	for (int i = 0; i < current_index_task; ++i) {
		if (SCH_tasks_G[i].Delay > 0) {
			--SCH_tasks_G[i].Delay;
		}
		else {
			SCH_tasks_G[i].Delay = SCH_tasks_G[i].Period;
			++SCH_tasks_G[i].RunMe;
		}
	}
}

void SCH_Dispatch_Tasks(void) {
	for (int i = 0; i < current_index_task; ++i) {
		if (SCH_tasks_G[i].RunMe > 0) {
			--SCH_tasks_G[i].RunMe;
			(*SCH_tasks_G[i].pTask)();
			if (SCH_tasks_G[i].Period == 0) {
				SCH_Delete_Task(i);
			}
		}
	}
}
