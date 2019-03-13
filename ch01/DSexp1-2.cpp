#include<iostream>
#include<cmath>
using namespace std;
double factorial(double n)
{
    double result = 1;
    while(n)
    {
        result *= n--;
    }
    return result;
}
int main()
{
    int n = 1, i;
    cin >> i;
    while(i >= n)
    {
        cout << "log2(n):" << log2(n)
            << "      √n：" << sqrt(n) 
            << "      n：" << n 
            << "      n*log2(n)：" << n*log2(n)
            << "      n*n：" << n*n 
            << "      n^3：" << n*n*n
            << "      2^n：" << exp2(n)
            << "      n!：" << factorial(n) << endl;
        n++;
    }
    return 0;
}