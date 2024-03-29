/*
 * A simple module
 *
 * A very simple module, with an internal data structure
 * and 3 manipulation functions.
 * The data structure is just a pair of integer variables.
 * The 3 functions are to:
 * - set the variable value;
 * - get the variable value;
 * - increment the variable value.
 *
 * \author (2016) Artur Pereira <artur at ua.pt>
 */
#ifndef __SO_IPC_INCREMENTER_INC_MOD_
#define __SO_IPC_INCREMENTER_INC_MOD_

/* manipulation functions */
void v_create();

void v_connect();

void v_destroy();

void v_set(int v1, int v2);

int v_get(int * v1, int * v2);

void v_inc(void);

#endif /* __SO_IPC_INCREMENTER_INC_MOD_ */
