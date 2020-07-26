#include <iostream>
using namespace std;

long long CalcGCD(long long fNum , long long sNum) {
	if (sNum != 0){
       int rem = (fNum%sNum);
       return CalcGCD(sNum, rem);
    }else
       return fNum;
}

long long LCM(long long fNum , long long sNum){
    return (fNum*sNum)/CalcGCD(fNum,sNum);
}
int main(){
    long long fNum , sNum;
    cin >> fNum >> sNum;
    cout << LCM(fNum , sNum) << endl;
    return 0;
}
