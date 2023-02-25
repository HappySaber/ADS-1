// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"
bool checkPrime(uint64_t value) {
  uint64_t c = 0;
  for (uint64_t i = 2; i < (value); i++) {
    if (value % i == 0) return false;
  }
    return true;
  }
uint64_t nPrime(uint64_t n) {
  uint64_t count = 0;
  uint64_t d = 0;
  for (uint64_t i = 2; i <= 10000; i++) {
    if (checkPrime(i) == true) {
      count++;
    }
    if (count == n) {
      d = i;
      break;
    }
  }
  return d;
}
uint64_t nextPrime(uint64_t value) {
  uint64_t t = 0;
  for (uint64_t i = value + 1; i <= value + 2000; i++) {
    if (checkPrime(i) == true) t = i;
  }
  return t;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i) == true) sum += i;
  }
  return sum;
}
