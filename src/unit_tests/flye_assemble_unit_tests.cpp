#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cstdlib>
#include "doctest.h"
#include "sequence_container.h"

using SequenceIndex = SequenceContainer::SequenceIndex;
static auto data = std::string(std::getenv("TestData"));

static void check_sequence_index(const SequenceIndex &index, const SequenceIndex &expected_index){
    REQUIRE(index.size() == expected_index.size());
    for(size_t i = 0; i < 10; ++i) {
            CHECK(index[i].description == expected_index[i].description);
            //CHECK(index[i].sequence.str() == expected_index[i].sequence.str());
    }
}

/*
TEST_CASE("loadFromFile: 1Record.1Thread") {

    const auto fileName = data + "/1Record.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 1;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: 7Records.1Thread") {

    const auto fileName = data + "/7Records.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 1;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: 7Records.2Threads") {

    const auto fileName = data + "/7Records.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 2;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: 7Records.3Threads") {

    const auto fileName = data + "/7Records.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 3;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: 7Records.4Threads") {

    const auto fileName = data + "/7Records.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 4;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: EColi_500kb.1Thread") {

    const auto fileName = data + "/ecoli_500kb.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 1;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: EColi_500kb.2Threads") {

    const auto fileName = data + "/ecoli_500kb.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 2;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: EColi_500kb.3Threads") {

    const auto fileName = data + "/ecoli_500kb.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 3;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: EColi_500kb.4Threads") {

    const auto fileName = data + "/ecoli_500kb.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 4;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
} */

TEST_CASE("loadFromFile: EColi.1Thread") {

    const auto fileName = "/home/umesh/MDC/Data/assembly/input/E-Coli/Loman_Ecoli_Nanopore_MAP006-1_2D_50x.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 1;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

/*
TEST_CASE("loadFromFile: EColi.2Threads") {

    const auto fileName = "/home/umesh/MDC/Data/assembly/input/E-Coli/Loman_Ecoli_Nanopore_MAP006-1_2D_50x.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 2;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: EColi.3Threads") {

    const auto fileName = "/home/umesh/MDC/Data/assembly/input/E-Coli/Loman_Ecoli_Nanopore_MAP006-1_2D_50x.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 3;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
}

TEST_CASE("loadFromFile: EColi.4Threads") {

    const auto fileName = "/home/umesh/MDC/Data/assembly/input/E-Coli/Loman_Ecoli_Nanopore_MAP006-1_2D_50x.fasta";
    const size_t minRecordLength = 0;
    SequenceContainer sc_expected{};
    sc_expected.loadFromFile(fileName, minRecordLength);

    const bool runParallel = true;
    const size_t threads = 4;
    SequenceContainer sc{};
    sc.loadFromFile(fileName, minRecordLength, runParallel, threads);

    check_sequence_index(sc.iterSeqs(), sc_expected.iterSeqs());
} */