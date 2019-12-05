#include <iostream>
#include <limits>
#include <type_traits>

using namespace std;

int fun(int *ptr)
{
    return (*ptr - 5);
}

int main(void)
{
    int n1 = 1;
    int n2(2);
    int n3{3};
    const auto n4 = static_cast<int>(4);
    const int val = 10;
    const int *ptr = &val;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;

    cout << fun(const_cast <int *>(ptr)) << endl;

    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

    cout << boolalpha;
    cout << "is_integral:" << endl;
    cout << "char: " << is_integral<char>::value << endl;
    cout << "int: " << is_integral<int>::value << endl;
    cout << "float: " << is_integral<float>::value << endl;
    return (0);
}
