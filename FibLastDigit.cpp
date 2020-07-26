#include <iostream>
using namespace std;

int GetFinLastDigitNumFast(long long num){
    if(num <= 1){
        return num;
    }
    int res = 0;
    int fNum = 0 , sNum = 1;
    for(int i = 2 ; i <= num ; i++){
        res = fNum%10 + sNum%10;
        fNum = sNum%10;
        sNum = res%10;
    }
    return res%10;
}


int main(){
    long long num;
    cin >> num;
    cout << GetFinLastDigitNumFast(num) << endl;
    return 0;
}
