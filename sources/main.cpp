#include <iostream>
#include "calculator.hpp"
using namespace std;

auto main() -> int
{
    Calculator<int> calc(10, 20);
    cout << calc.add() << endl;
    cout << calc.sub() << endl;
    cout << calc.mul() << endl;

    return 0;
}
