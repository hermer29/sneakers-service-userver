#include "authentication.hpp"

#include <userver/utest/utest.hpp>

UTEST(Authentication, Basic) {
  EXPECT_EQ(passec::SayHelloTo("Developer"), "Hello, Developer!\n");
  EXPECT_EQ(passec::SayHelloTo({}), "Hello, unknown user!\n");
}
