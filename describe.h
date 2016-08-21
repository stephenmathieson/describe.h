
//
// describe.h
//
// Copyright (c) 2013 Stephen Mathieson
// Copyright (c) 2015 Michael Phan-Ba
// MIT licensed
//

#ifndef DESCRIBE_H
#define DESCRIBE_H 1

#include <stdio.h>
#include "assertion-macros/assertion-macros.h"

/**
 * Before specification.
 */

int
__before_specification(int current);

/**
 * After specification.
 */

void
__after_specification(int before, int current, const char *specification);

/**
 * Describe the following `suite` with the given `title`.
 */

#define describe(title) for (                     \
  int __run = 0;                                  \
  __run++ == 0 && printf("\n  %s\n", title);      \
  printf("\n")                                    \
)

/**
 * Describe the following `fn` with given `specification`.
 */

#define it(specification) for (                                         \
  int __run = 0, __before = __before_specification(assert_failures());  \
  __run++ == 0;                                                         \
  __after_specification(__before, assert_failures(), specification)     \
)


#endif
