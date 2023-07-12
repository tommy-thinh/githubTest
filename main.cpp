#include <iostream>
using namespace std;
int main()
{
    int p=1,n;
    cout << "n giai thua?: ";
    cin >> n;
    // use for loop to calculate factorial
    for (int i=1; i<=n; i++) {
        p*= i;
    }
    cout << "n! = " << p;
    return 0;
}
