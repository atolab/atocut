#ifndef _LIB_ATO_CUT_H__
#define _LIB_ATO_CUT_H__

#include <stdatomic.h>

typedef atomic_uint atomic_counter_t;

unsigned int atomic_counter_size();
void atomic_counter_set(volatile atomic_counter_t *c, unsigned int v);
void atomic_counter_inc(volatile atomic_counter_t *c);
void atomic_counter_dec(volatile atomic_counter_t *c);
unsigned int atomic_counter_get(volatile atomic_counter_t *c);

#endif /* LIB_ATO_CUT_ */