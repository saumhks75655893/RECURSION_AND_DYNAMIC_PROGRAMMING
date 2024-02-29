#include <bits/stdc++.h>
using namespace std;

// class solution
// {
// public:
//     int fibbo(int n)
//     {
//         if (n == 0 || n == 1)
//             return n;

//         return (fibbo(n - 1) + fibbo(n - 2));
//     }
// };

// int main()
// {
//     int n, i = 0;
//     cout << "enter number : ";
//     cin >> n;

//     solution sl;
//     while (i < n)
//     {
//         cout << sl.fibbo(i) << "  ";
//         i++;
//     }
// }

// 2. second method of fibonacci series creating : ------

void fib(int n)
{
    int a = 0, b = 1;
    for (int i = 0; i < n; i++)
    {

        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout << "enter : ";
    cin >> n;

    fib(n);
}