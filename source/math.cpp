//
// Created by Saman on 19.12.25.
//

#include "dnTest/test.h"

REGISTER(testMath) {
    TEST(givenOne_whenAddingOne_shouldBeTwo) {
        expect((1 + 1) == 2, "1 + 1 should be 2");
    };

    TEST(givenOne_whenAddingOne_shouldNotBeOneOrThree) {
        expect((1 + 1) != 1, "1 + 1 should not be 1");
        expect((1 + 1) != 3, "1 + 1 should not be 3");
    };

    TEST(givenOne_whenAddingZero_shouldBeZero) {
        expect((1 + 0) == 0, "1 + 0 should be 0");
    };
}
