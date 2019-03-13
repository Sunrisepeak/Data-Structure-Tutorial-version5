#include<iostream>
#include<cmath>
#include<ctime>
#include<string>
using namespace std;
double factorial(double n)        //求阶乘
{
    double result = 1;
    while(n)
    {
        result *= n--;
    }
    return result;
}
double testTime(double n)        //测试从0~n的消耗的时间
{
    clock_t start, end;
    start = clock();
    for(double i = 0; i <= n;i++);
    end = clock();
    return (end - start)*1.0/CLOCKS_PER_SEC;
}
void tPrint(string str, double n)    //output
{
    cout << "Start test " << str << ":" << endl;
    cout << "...\n" << "End,time is :" << testTime(n) << "s\n---------------------\n";
}
int main()
{
    double n;
    cin >> n;
    tPrint("log2(n)",log2(n));
    tPrint("√n",sqrt(n));
    tPrint("n",n);
    tPrint("n^2",n*n);
    tPrint("n^3",n*n*n);
    tPrint("2^n",exp2(2));
    tPrint("n!",factorial(n));
    return 0;
}