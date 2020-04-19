/*
 * Copyright (c) 2020 Naveen Ravichandrasekaran.
 * See LICENSE in top-level directory for Copyright information.
 */

#include "test_internal.hpp"

TEST(testCanary, canary) { ASSERT_EQ(true, true); }

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
