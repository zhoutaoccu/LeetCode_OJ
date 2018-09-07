#define CATCH_CONFIG_MAIN
#include "../Catch/single_include/catch.hpp"
#include "solution.h"

TEST_CASE("Move Zeores", "moveZeores")
{
    Solution s;

    std::vector<int> nums{0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    REQUIRE( ( nums == std::vector<int>{1, 3, 12, 0, 0}) );

}
