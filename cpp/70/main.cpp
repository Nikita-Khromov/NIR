#include <iostream>
#include <random>

using namespace std;

int main()
{
    const int N = 100000000;
    uniform_int_distribution<int> distribution(0,5);
    default_random_engine generator;
    int a[6];
    int flag = 0, summ = 0;
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < 6; ++j){
            a[j] = 0;
        }
        for (int j = 0; j < 3; ++j){
            ++a[distribution(generator)];
        }
        for (int j = 0; j < 6; ++j){
            if (a[j] > 1)
                flag = 1;
        }
        if (flag == 0)
            ++summ;
        else
            flag = 0;
    }
    cout << summ/(N*1.0) << endl;
    return 0;
}
