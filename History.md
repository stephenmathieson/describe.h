
2.1.1 / 2016-08-23
==================

  * Fix for assert failures

2.1.0 / 2016-01-17
==================

  * package: add "describe.c"
  * describe: move `__after_specification` into a .c (#9)

2.0.2 / 2016-01-13
==================

  * package: update `assertion-macros.h`
  * describe: remove `DESCRIBE_VERSION`

2.0.1 / 2015-12-20
==================

  * package: update assertion-macros
  * Makefile: build objects
  * Readme: fix layout on @mikepb's copyright notice

2.0.0 / 2015-09-11
==================

  * no longer creating `int main()` for you (#8, @mikepb)
  * add support for XCode breakpoints (#8, @mikepb)
  * add support for multiple `describe` statements

1.1.0 / 2014-03-27
==================

 * Use console-colors.c for ANSI color codes

1.0.1 / 2014-03-18
==================

 * Update assertion-macros.h for `assert_null` and `assert_not_null`
 * package: Make assertion-macros.h a dep

# 1.0.0

  * Fix name in `package.json`
  * `describe` now creates `int main`
  * `describe` will always exit with the number of failed assertions

# 0.0.1

  * Initial Release
