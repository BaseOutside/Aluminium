#ifndef ALUMINIUM_MATH
#define ALUMINIUM_MATH

#include <cmath>
#include <map>
#include <numeric>
#include <random>
#include <vector>

namespace aluminium {
namespace math {

double round_n(double number, const unsigned int n) {
    number = number * std::pow(10, n - 1);
    number = std::round(number);
    number /= std::pow(10, n - 1);
    return number;
}

unsigned int count_digit(long long int n) {
    unsigned int digits = 0;
    for (; n != 0; n /= 10, ++digits) {
    }
    return digits;
}

double pi(const unsigned int precision) {
    double pi = 3.141592653589793;
    return round_n(pi, precision);
}

double e(const unsigned int precision) {
    double e = 2.718281828459045;
    return round_n(e, precision);
}

unsigned long long int factorial(const unsigned int n) {
    unsigned long long int ans = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}

std::vector<unsigned long long int> enumerate_prime(const unsigned long long int n) {
    std::vector<unsigned long long int> result(n);
    std::iota(result.begin(), result.end(), 0);
    for (unsigned long long int i = 2; i * i < n; ++i) {
        if (result.at(i) < i)
            continue;
        for (unsigned long long int j = i * i; j < n; j += i)
            if (result.at(j) == j)
                result.at(j) = i;
    }
    return result;
}

std::map<unsigned long long int, unsigned int> prime_factorization(unsigned long long int n) {
    std::map<unsigned long long int, unsigned int> result{};
    auto min_factor = enumerate_prime(n + 1);
    while (n > 1) {
        ++result[min_factor.at(n)];
        n /= min_factor.at(n);
    }
    return result;
}

unsigned long long int rho(unsigned long long int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    unsigned long long int x, y, d;
    x = 2;
    y = 2;
    d = 1;
    std::random_device rd;
    std::mt19937 mt(rd());
    auto c = mt() % n;
    auto f = [&n, &c](unsigned long long int x) { return (x * x + c) % n; };
    while (d == 1) {
        x = f(x);
        y = f(f(y));
        d = std::gcd(x - y, n);
    }

    if (d == n) {
        return 0;
    } else {
        return d;
    }
}

} // namespace math
} // namespace aluminium

#endif
