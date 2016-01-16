
//
// describe.c
//
// Copyright (c) 2016 Stephen Mathieson
// MIT licensed
//

#include "describe.h"
#include "console-colors/console-colors.h"

int
__before_specification(void) {
  return assert_failures();
}

void
__after_specification(const int before, const char *specification) {
  int failed = before == assert_failures();
  cc_fprintf(
      failed ? CC_FG_DARK_GREEN : CC_FG_DARK_RED
    , stdout
    , "    %s"
    , failed ? "✓" : "✖"
  );
  cc_fprintf(CC_FG_GRAY, stdout, " %s\n", specification);
}
