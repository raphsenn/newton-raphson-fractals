#include "./complex.h"
#include <gtest/gtest.h>


TEST (complexTest, add) {
    Complex a(1, 1);
    Complex b(4, 5);
    Complex c(-1, -1);
    Complex d(2, -10);

    ASSERT_EQ((a + b) == Complex(5, 6), true);
    ASSERT_EQ((a + c) == Complex(0, 0), true);
    ASSERT_EQ((d + a) == Complex(3, -9), true);
    ASSERT_EQ((a + a) == Complex(2, 2), true);
    ASSERT_EQ((a + a) == Complex(2.01, 2.01), false);
}


TEST (complexTest, sub) {
  Complex a(1, 1);
  Complex b(4, 5);
  Complex null(0, 0);
  ASSERT_EQ((a - a) == null, true);
  ASSERT_EQ((a - b) == Complex(-3, -4), true);
}


TEST (complexTest, div) {
    Complex a(5, 2);
    Complex b(1, -5);
    Complex c(-1, -1);
    Complex d(2, -10);

    ASSERT_EQ(a / b == Complex(-5.0/26.0, 27.0/26.0), true);
}

TEST(complexTest, neg) {
    Complex a(1, 1);
    Complex b(-4, 5);
    Complex c(-1, -1);
    Complex d(2, -10);

    ASSERT_EQ(neg(a) == Complex(1, -1), true);
    ASSERT_EQ(neg(b) == Complex(-4, -5), true);
    ASSERT_EQ(neg(c) == Complex(-1, 1), true);
    ASSERT_EQ(neg(d) == Complex(2, 10), true);
}

TEST(complexTest, abs) {
    Complex a(3, 4);
    Complex b(-5, 12);
    Complex c(0, 0);
    Complex d(1, 0);

    ASSERT_EQ(abs(a) == 5, true);
    ASSERT_EQ(abs(b) == 13, true);
    ASSERT_EQ(abs(c) == 0, true);
    ASSERT_EQ(abs(d) == 1, true);
}

TEST(complexTest, mult) {
    Complex a(5, 2);
    Complex b(1, -5);
    Complex c(-2, 2);

    ASSERT_EQ((a * b) == Complex(15, -23), true);
}



int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
