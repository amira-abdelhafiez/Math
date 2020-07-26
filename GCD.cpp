#include <iostream>
using namespace std;

int CalcGCD(int fNum , int sNum) {
	if (sNum != 0){
       int rem = (fNum%sNum);
       return CalcGCD(sNum, rem);
    }else
       return fNum;
}
int main(){
     int fNum , sNum;
     cin >> fNum >> sNum;
     cout << CalcGCD(fNum , sNum) << endl;
     return 0;
}
