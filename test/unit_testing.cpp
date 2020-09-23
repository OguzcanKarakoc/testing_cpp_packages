
#include <gtest/gtest.h>
#include "random_test.h"

TEST(TestCategory, TestName) {
    bool value = random_test();
    ASSERT_TRUE(value);
//    ASSERT_EQ(value, true);
}