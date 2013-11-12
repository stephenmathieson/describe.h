
#include "describe.h"

int main(int argc, char **argv) {
  describe("my program", {
    it("should do stuff", {
      assert(12 == 12);
    });

    it("should fail sometimes", {
      assert(0 == 12);
    });

    it("should be ok after failures", {
      assert(1 == 1);
    });

    it("should bundle assertion macros", {
      assert_equal(1, 1);
      assert_not_equal(1, 2);
      assert_str_equal("hello", "hello");
      assert_str_not_equal("hello", "world");
    });
  });

  return assert_failures();
}
