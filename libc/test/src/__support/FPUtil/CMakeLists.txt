add_custom_target(libc-fputil-tests)

add_fp_unittest(
  dyadic_float_test
  NEED_MPFR
  SUITE
    libc-fputil-tests
  SRCS
    dyadic_float_test.cpp
  DEPENDS
    libc.src.__support.FPUtil.dyadic_float
)

add_libc_test(
  fpbits_test
  SUITE
    libc-fputil-tests
  SRCS
    fpbits_test.cpp
  DEPENDS
    libc.src.__support.FPUtil.fp_bits
)
