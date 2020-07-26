#include <iostream>
using namespace std;
// m^2
long long GetLen(long long m) {
    long long fNum = 0, sNum = 1;
    long long res = fNum + sNum;
    for (int i = 0; i < m * m; i++) {
        res = (fNum+sNum)%m;
        fNum = sNum;
        sNum = res;
        if (fNum == 0 && sNum == 1)
            return (++i);
    }
}
long long GetFibLargeNum(long long num , long long m){
    long long fNum = 0, sNum = 1;
    long long int limit = num % GetLen(m);
    long long res = limit;
    for (int i = 1; i < limit; i++) {
        res = (fNum + sNum)% m;
        fNum = sNum;
        sNum = res;
    }
    return (res%m);
}



int main(){
    long long num;
    int m;
    cin >> num >> m;
    cout << GetFibLargeNum(num , m) << endl;
    return 0;
}
