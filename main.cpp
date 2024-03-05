#include "IsKperiodic.cpp"


int main()
{
    string test1 = "abcabcabc";
    string test2 = "abaabcaac";
    int K = 3;
    cout << IsKPeriodic(test1,K) << endl;
    cout << IsKPeriodic(test2,K) << endl;
    return 0;
}