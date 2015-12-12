echo "Compiling unit tests..."
clang++ -std=c++11 -pthread -g -Wall -Wextra -c -o tests/main.o tests/main.cpp
echo "Done compiling main.cpp"
clang++ -std=c++11 -pthread -g -Wall -Wextra -c -o tests/calculator_test.o tests/calculator_test.cpp
echo "Done compiling calculator_test.cpp"
clang++ -std=c++11 -g -Wall -Wextra -o tests/gtest tests/calculator_test.o tests/main.o -lgtest -pthread
echo "Running unit tests..."
tests/gtest -v
result=$?
rm -r tests/gtest tests/calculator_test.o tests/main.o
echo "Unit tests completed : $result"
exit $result
