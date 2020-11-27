/**********************************************
 * Copyright (c) 2020 Isotropic Systems Limited
 **********************************************/

#include "gtest/gtest.h"

// Test the external API
#include "Example.h"

TEST(ExampleTestSuite, ExampleHello)
{
    EXPECT_EQ(Example::Example().text(), "Hello");
}