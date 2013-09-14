#include <cstring>
#include <cuda_runtime.h>

#include "gtest/gtest.h"
#include "caffeine/common.hpp"

namespace caffeine {

class CommonTest : public ::testing::Test {};

TEST_F(CommonTest, TestCublasHandler) {
  EXPECT_TRUE(Caffeine::cublas_handle());
}

TEST_F(CommonTest, TestBrewMode) {
 EXPECT_EQ(Caffeine::mode(), Caffeine::CPU);
 Caffeine::set_mode(Caffeine::GPU);
 EXPECT_EQ(Caffeine::mode(), Caffeine::GPU);
}

}