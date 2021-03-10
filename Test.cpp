#include "doctest.h"
#include "snowman.hpp"
#include <string>
#include <algorithm>
#include <cassert>
using namespace ariel;
using namespace std;
string nospaces(string input) {
	erase(input, ' ');
	erase(input, '\t');
	erase(input, '\n');
	erase(input, '\r');
	return input;
}
TEST_CASE("Working codes") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114423)) == nospaces(" ___\n.....\n(.,.)\n(] [)\n(___)"));
    CHECK(nospaces(snowman(44221231)) == nospaces("  ___\n (_*_)\n (. .)/\n<(> <)\n ( : )"));
    CHECK(nospaces(snowman(13233411)) == nospaces(" _===_\n (o_O)\n/( : )\n ( : )"));
    CHECK(nospaces(snowman(11114422)) == nospaces("_===_\n(.,.)\n(] [)\n(\" \")"));
    CHECK(nospaces(snowman(21114412)) == nospaces(" ___\n.....\n(.,.)\n( : )\n(\" \")"));
    CHECK(nospaces(snowman(12113411)) == nospaces(" _===_\n (...)\n/( : )\n ( : )"));
    CHECK(nospaces(snowman(21114413)) == nospaces(" ___\n.....\n(.,.)\n( : )\n(___)"));
    CHECK(nospaces(snowman(44223331)) == nospaces("  ___\n (_*_)\n (o O)\n/(___)\\\n ( : )"));
    CHECK(nospaces(snowman(13233311)) == nospaces(" _===_\n (o_O)\n/( : )\\\n ( : )"));
    CHECK(nospaces(snowman(41144122)) == nospaces(" ___\n(_*_)\n(.,-)\n(] [)>\n(\" \")"));
    CHECK(nospaces(snowman(41143311)) == nospaces("  ___\n (_*_)\n (.,-)\n/( : )\\\n ( : )"));
    CHECK(nospaces(snowman(31143311)) == nospaces("   _\n  /_\\\n (.,-)\n/( : )\\\n ( : )"));
    CHECK(nospaces(snowman(31114413)) == nospaces("  _\n /_\\\n(.,.)\n( : )\n(___)"));

  

}
TEST_CASE("unworking code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123213121));
    CHECK_THROWS(snowman(12345678));
    CHECK_THROWS(snowman(12481119));
    CHECK_THROWS(snowman(12411119));
    CHECK_THROWS(snowman(123112312));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(-11114422));

  
}