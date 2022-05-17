#ifndef KERNEL_SYNCH_H_
#define KERNEL_SYNCH_H_

#include "stdbool.h"
#include "stdint.h"

// mutex
typedef struct KernelMutext_t
{
	uint32_t owner;
	bool lock;
} KernelMutext_t;

// semaphore
void Kernel_sem_init(int32_t max);
bool Kernel_sem_test(void);
void Kernel_sem_release(void);

// mutex
void Kernel_mutex_init(void);
bool Kernel_mutex_lock(uint32_t owner);
bool Kernel_mutex_unlock(uint32_t owner);

#endif
