#include<iostream>
#include<cmath>
#include<ctime>
bool Isprime_method1(int n)     
{
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}
bool Isprime_method2(int n)
{
    for(int i = 2; i <= sqrt(n); i++)   //opitimize by sqrt() function
        if(n % i == 0)
            return false;
    return true;
}
//by stackoverflow
bool is_prime(int num)
{
    int k = 1, a = 0, b = 0;
    long sr;
    switch(num)
        {
        case 1: return 0;
        case 2: return 1;
        case 3: return 1;
        case 4: return 0;
        case 5: return 1;
        case 6: return 0;
        case 7: return 1;
    }
    if (num % 2 == 0) return 0;
    if (num % 3 == 0) return 0;
    sr = (int) sqrt(num);
    while (b < sr) {
        a = (6 * k) - 1;
        b = (6 * k) + 1;
        if (num % a == 0)
            return 0;
        if (num % b == 0)
            return 0;
        k += 1;
    }
    return 1;
}
void ptime(clock_t begin, clock_t end)
{
    std::cout << "test case of time is " << (end - begin) * 1.0 /CLOCKS_PER_SEC
              << std::endl;
}
int prime_count(int n, bool f(int n))
{
    int ans = 0;
    for(int i = 2; i <= n; i++)
        if(f(i))
            ans++;
    return ans;
}
int main()
{
    int n;
    clock_t begin, end;
    std::cin >> n;
    begin = clock();
    std::cout << "1.The number of prime Number is " 
              << prime_count(n,Isprime_method1)
              << std::endl;
    end = clock();
    ptime(begin, end);
    begin = clock();
    std::cout << "2.The number of prime Number is " 
              << prime_count(n,Isprime_method2)
              << std::endl;
    end = clock();
    ptime(begin, end);
    begin = clock();
    std::cout << "3.The number of prime Number is " 
              << prime_count(n, is_prime)
              << std::endl;
    end = clock();
    ptime(begin, end);
    return 0;
}
