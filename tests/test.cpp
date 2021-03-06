// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "zad1.hpp"
#include "zad2.hpp"

TEST(Example, EmptyTest) {
    EXPECT_EQ(std::is_move_constructible<stack1<int>>::value, true);
    EXPECT_EQ(std::is_move_assignable<stack1<int>>::value, true);
    EXPECT_EQ(std::is_move_constructible<stack2<int>>::value, true);
    EXPECT_EQ(std::is_move_assignable<stack2<int>>::value, true);
    stack1 <int> s;
    int a = 48;
    s.push(a);
    EXPECT_EQ(s.head(), 48);
    stack2 <std::string> x;
    x.push("kek");
    x.push("lol");
    x.push("azaz");
    EXPECT_EQ((std::string) x.pop(), "azaz");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
