#include <iostream>


int main()
{
    int i, n, n1, s1 = 0, j;
    long fact;
    std::cout << " Input a number to check whether it's Strong number: ";
    std::cin >> n;
    n1 = n;
    for (j = n; j > 0; j = j / 10) {
        fact = 1;
        for (i = 1; i <= j % 10; ++i) {
            fact = fact * i;
        }
        s1 = s1 + fact;
    }
    if (s1 == n1) {
        std::cout << n1 << " is a Strong number." << std::endl;
    }
    else {
        std::cout << n1 << " is not a Strong number." << std::endl;
    }

    return 0;
}
