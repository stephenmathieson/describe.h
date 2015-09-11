
#include "describe.h"

int main(void) {
  describe("my program") {
    it("should do stuff") {
      assert(12 == 12);
    }

    it("should fail sometimes") {
      assert(0 == 12);
    }

    it("should be ok after failures") {
      assert(1 == 1);
    }

    it("should bundle assertion macros") {
      assert_equal(1, 1);
      assert_not_equal(1, 2);
      assert_str_equal("hello", "hello");
      assert_str_not_equal("hello", "world");
      assert_null(NULL);
      assert_not_null("not null");
    }
  }
  return assert_failures();
}
