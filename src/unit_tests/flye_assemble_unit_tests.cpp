#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "sequence_container.h"

TEST_CASE("vectors can be sized and resized") {
    std::vector<int> v(5);
    CHECK(v.size() == 5);
}