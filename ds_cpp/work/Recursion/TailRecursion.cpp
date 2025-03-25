#include <iostream>

using namespace std;

void fun(int n);

int main() {
    fun(3);

    return 0;
}

void fun(int n)
{
    if (n > 0)
    {
        printf("%d", n);

        fun(n - 1);
    }
}
