/*what is sum for 1-n factorial ? anwser: requit O(n)
 */
#include<iostream>
int main()
{
    int n;
    std::cin >> n;
    int t = 1, ans = 0;  //save factorial value for i;(i belong (1,n))
    for(int i = 1; i <= n; i++)
    {
        t *= i;
        ans += t;
    }
    std::cout << "'1-" << n << "'s sum of factorial is " << ans << std::endl;
    return 0;
}
