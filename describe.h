
//
// describe.h
//
// Copyright (c) 2013 Stephen Mathieson
// MIT licensed
//


#ifndef DESCRIBE_H
#define DESCRIBE_H 1

#include "assertion-macros/assertion-macros.h"
#include "color/color.c"

#define DESCRIBE_VERSION "1.0.0"
#define DESCRIBE_OK      "✓"
#define DESCRIBE_FAIL    "✖"

/*
 * Describe `fn` with `title`
 */

#define describe(title, fn) int main(void) { \
  printf("\n  %s\n", title); \
  fn; \
  printf("\n"); \
  return assert_failures(); \
}

/*
 * Describe `fn` with `specification`
 */

#define it(specification, fn) ({ \
  int before = assert_failures(); \
  fn; \
  char *status; \
  if (assert_failures() == before) { \
    status = color((ansi_color_opts){.color=ANSI_COLOR_GREEN}, DESCRIBE_OK); \
  } else { \
    status = color((ansi_color_opts){.color=ANSI_COLOR_RED}, DESCRIBE_FAIL); \
  } \
  char *spec = color((ansi_color_opts){.color=ANSI_COLOR_GRAY}, specification); \
  printf("    %s %s\n", status, spec); \
  free(status); \
  free(spec); \
});

#endif
