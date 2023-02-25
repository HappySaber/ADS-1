// Copyright 2022 NNTU-CS
#include <cstdint>

#include "alg.h"
bool checkPrime(int value) {
  int c = 0;
  for (int i = 2; i < value; i++) {
    if (value % i == 0) {
      c++;
    }
  }
  if (c == 0)
    return true;
  else
    return false;
}
int nPrime(int n) {
  int count = 0;
  for (int i = 2; i <= 10000; i++) {
    if (checkPrime(i) == true) {
      count++;
    }
    if (count == n) {
      return i;
    }
  }
}
uint64_t nextPrime(uint64_t value) {
  for (uint64_t i = value; i <= value + 1000; i++) {
    if (checkPrime(i) == true) return i;
  }
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i) == true) sum += i;
  }
  return sum;
}
