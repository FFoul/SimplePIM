#ifndef PARAM_H
#define PARAM_H

#include <stdlib.h>
#include <stdint.h>
uint32_t print_info = 0;
typedef int32_t T; 
const uint32_t dpu_number = 5; // 243

#define K 10
const uint32_t k = K;
const uint32_t num_elements = 1000 * K;

// const uint32_t k = 10;
const uint32_t dim = 10;
// const uint32_t num_elements  = 1000 * 5;
const uint32_t iter = 1;

#endif