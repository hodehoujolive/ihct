#include "ihct.h"

IHCT_TEST(arithmetic_addition_basic) {
    IHCT_ASSERT(1 + 2 == 3);
    IHCT_ASSERT(4 + 2 == 6);
    IHCT_ASSERT(8 + 8 == 16);
}
IHCT_TEST(arithmetic_addition_big) {
    IHCT_ASSERT(1000 + 2000 == 3000);
    IHCT_ASSERT(4000 + 2000 == 6000);
    IHCT_ASSERT(8000 + 8000 == 16000);
}
IHCT_TEST(arithmetic_multiplication) {
    IHCT_ASSERT(1 * 3 == 3);
    IHCT_ASSERT(0 * 3 == 0);
    IHCT_ASSERT(3 * 3 == 9);
}

IHCT_TEST(strings_basic) {
    IHCT_ASSERT_STR("abba", "abba");
    IHCT_NASSERT_STR("Alfa", "adolf");
}

IHCT_TEST(strings_invalid) {
    IHCT_ASSERT_STR("Evil", "Good"); // should fail.
}

IHCT_TEST(strings_more) {
    IHCT_ASSERT_STR("aaa", "aaa");
    IHCT_ASSERT_STR("bbb", "bbb");
    IHCT_ASSERT_STR("ccc", "ccc");
    IHCT_ASSERT_STR("ddd", "ddd");
    IHCT_ASSERT_STR("eee", "eee");
}

int main(int argc, char **argv) {
    return IHCT_RUN(argc, argv);
}