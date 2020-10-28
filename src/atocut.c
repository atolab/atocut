#include "atocut.h"

unsigned int atomic_counter_size() {
    return sizeof(atomic_uint);
}

void atomic_counter_set(volatile atomic_counter_t *c, unsigned int v) {
    atomic_store(c, v);
}

void atomic_counter_inc(volatile atomic_counter_t *c) {
    atomic_fetch_add(c, 1);
}
void atomic_counter_dec(volatile atomic_counter_t *c) {
    atomic_fetch_sub(c, 1);
}

unsigned int atomic_counter_get(volatile atomic_counter_t *c) {
    return atomic_load(c);
}
