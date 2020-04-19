#include "test_internal.hpp"
#include <template.cpp>

TEST(testTemplateFunc, canary) { ASSERT_EQ(true, canaryFunc()); }
