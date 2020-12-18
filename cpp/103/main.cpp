#include <iostream>
#include <random>

using namespace std;

int main()
{
    const int N = 1000000000;
    uniform_int_distribution<int> distribution(0,5);
    default_random_engine generator;
    int a[6], m, summ = 0;
    cin >> m;
    for (int i = 0; i < N; ++i){
        for (int k = 0; k < 6; ++k){
            a[k] = 0;
        }
        for (int j = 0; j < m; ++j){
            ++a[distribution(generator)];
        }
        if (a[4] >= 2)
            ++summ;
    }
    cout << summ/(N*1.0) << endl;
    return 0;
}
