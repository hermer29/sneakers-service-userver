#include "authentication.hpp"

#include <userver/utest/utest.hpp>

UTEST(Authentication, Basic) {
  EXPECT_EQ(passec::Authorize("Developer", "4321"), "Hello, Developer4321!\n");
  EXPECT_EQ(passec::Authorize("John", "6346347"), "Hello, John6346347!\n");
}
