#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cstdlib>
#include "doctest.h"
#include "sequence_container.h"

static auto data = std::string(std::getenv("TestData"));
TEST_CASE("loadFromFile: 1Record.1Thread") {

    const auto fileName = data + "/1Record.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 1;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    REQUIRE(sc.iterSeqs().size() == sc_expected.iterSeqs().size());
}