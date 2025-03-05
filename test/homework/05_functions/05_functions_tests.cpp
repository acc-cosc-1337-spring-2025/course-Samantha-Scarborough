#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get_gc_content function"){
	REQUIRE (content(AGCTATAG)==.375);
	REQUIRE (content(CGCTATAG)==.50);
	
}
TEST_CASE("Verify get_dna_complement function"){
	REQUIRE (dna(AGCTATAG)==GATATCGA);
	REQUIRE (dna(CGCTATAG)==GATATCGC);
	
}
TEST_CASE("Verify reverse_string function"){
	REQUIRE (reverse(AAAACCCGGT)==ACCGGGTTTT);
	REQUIRE (reverse(CCCGGAAAAT)==ATTTTCCGGG);
}