#include <cassert>

auto main() -> int
{
    constexpr auto n = 10;
    assert(n + n == 20);

    return 0;
}
