#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cstdlib>
#include "doctest.h"
#include "sequence_container.h"

static auto data = std::string(std::getenv("TestData"));
TEST_CASE("Read header info") {
    SequenceContainer container;
    container.loadFromFile(data + "/header-only.fasta", 0);

    CHECK(&container != nullptr);
}