#include <iostream>

using namespace std;

int main()
{
    short int k, result;
    cin >> k;
    result =(k - 1) % 7 + 1;
    cout << result << endl;
    return 0;
}
