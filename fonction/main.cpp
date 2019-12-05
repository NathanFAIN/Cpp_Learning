#include <iostream>

using namespace std;

template<typename T>
T sum(T a, T b)
{
    return (a + b);
}

int main(void)
{
    int a{0};
    auto fun = [&](int n){a = n;};

    fun(1);
    cout << a << endl;
    cout << sum(1, 1) << endl;
    return (0);
}
