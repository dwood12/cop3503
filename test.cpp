#define CATCH_CONFIG_MAIN
#include "include/catch.hpp"
#include "Complex.h"

TEST_CASE("Comparison operators", "Components of complex numbers check for equality") {
      Complex c1(4,5);
      Complex c2(4,5);

     REQUIRE(c1 == c2);
     REQUIRE(!(c1 != c2));

}

TEST_CASE("Less Than Operator", "Components of complex numbers check for equality") {
      Complex c1(4,4);
      Complex c2(4,5);

      REQUIRE (c1 < c2);

}

TEST_CASE("Greater Than Operator", "Components of complex numbers check for equality") {
      Complex c1(4,5);
      Complex c2(4,6);

      REQUIRE(c2 > c1);

}

TEST_CASE("Greater Than or Equal Operator", "Components of complex numbers check for equality") {
      Complex c1(4,5);
      Complex c2(4,5);

      REQUIRE(c1 >= c2);
}

TEST_CASE("Plus", "Binary") {
      Complex c1(4,5);
      Complex c2(4,5);

      REQUIRE((c1 + c2).getReal() == (c1.getReal() + c2.getReal()));
      REQUIRE((c1 + c2).getImg() == (c1.getImg() + c2.getImg()));
}

TEST_CASE("Minus", "Binary") {
      Complex c1(4,5);
      Complex c2(4,5);

      REQUIRE((c1 - c2).getReal() == (c1.getReal() - c2.getReal()));
      REQUIRE((c1 - c2).getImg() == (c1.getImg() - c2.getImg()));

}

TEST_CASE("Multiplication", "Binary") {
      Complex c1(4,5);
      Complex c2(4,5);

      REQUIRE((c1 * c2).getReal() == (c1.getReal() * c2.getReal()));
      REQUIRE((c1 * c2).getImg() == (c1.getImg() * c2.getImg()));
}

TEST_CASE("Division", "Binary") {
      Complex c1(4,5);
      Complex c2(4,5);

       REQUIRE((c1 / c2).getReal() == (c1.getReal() / c2.getReal()));
       REQUIRE((c1 / c2).getImg() == (c1.getImg() / c2.getImg()));
}

 TEST_CASE("Plus-Equals", "Components of complex numbers check for equality") {
       Complex c1(4,5);
       Complex c2(4,5);

    REQUIRE((c1 -= c2).getReal() == (c1.getReal() += c2.getReal()));
 }

TEST_CASE("Minus-Equals", "Components of complex numbers check for equality") {
       Complex c1(4,5);
       Complex c2(4,5);

    REQUIRE((c1 *= c2).getReal() == (c1.getReal() -= c2.getReal()));
 }

TEST_CASE("Times-Equals", "Components of complex numbers check for equality") {
       Complex c1(4,5);
       Complex c2(4,5);

    REQUIRE((c1 *= c2).getReal() == (c1.getReal() *= c2.getReal()));
 }

TEST_CASE("Divide-Equals", "Components of complex numbers check for equality") {
       Complex c1(4,5);
       Complex c2(4,5);

    REQUIRE((c1 /= c2).getReal() == (c1.getReal() /= c2.getReal()));
 }





