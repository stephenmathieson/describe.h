
//
// describe.h
//
// Copyright (c) 2013 Stephen Mathieson
// MIT licensed
//


#ifndef __DESCRIBE_H__
#define __DESCRIBE_H__ 1

#include "assertion-macros.h"

#define DESCRIBE_VERSION "0.0.0"

#define DESCRIBE_OK "✓"
#define DESCRIBE_FAIL "✖"

/*
 * Describe `fn` with `title`
 */

#define describe(title, fn) ({ \
  printf("\n  %s\n", title); \
  fn; \
});

/*
 * Describe `fn` with `specification`
 */

#define it(specification, fn) ({ \
  int before = assert_failures(); \
  fn; \
  if (assert_failures() == before) { \
    printf("    \e[92m%s \e[90m%s\e[0m\n", DESCRIBE_OK, specification); \
  } else { \
    printf("    \e[90m%s \e[90m%s\e[0m\n", DESCRIBE_FAIL, specification); \
  } \
});

#endif
