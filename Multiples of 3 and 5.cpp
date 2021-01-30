#include <iostream>
#include <vector>

int sumMultiples(int a, int b, int n) 
{
    int result = 0, temp = 0;
    std::cout << "Multiples of 3 or 5 below " << n << ":\n";

    for (int i = 1; i < n; i++) 
    {
        if (i%a == 0 || i%b == 0)
        {
            std::cout << i << " ";
            result += i;
        }
    }
    return result;
}

int main()
{
    std::cout << "Project Euler: Problem 1 - Multiples of 3 and 5.\n\n";

    std::cout << "\nSum of Multiples: " << sumMultiples(3, 5, 1000) << "\n\n";
}

/*
* Problem:
* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
* Find the sum of all the multiples of 3 or 5 below 1000.
*/