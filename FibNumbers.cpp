#include <iostream>
using namespace std;

int GetFibNaiveSolution(int num){
    if(num <= 1)
        return num;
    return GetFibNaiveSolution(num - 1) + GetFibNaiveSolution(num - 2);
}
int GetFibFastSolution(long long num){
    if(num <= 1) return num;
    long long res = 0;
    long long fNum = 0, sNum = 1;

    for(long long i = 2; i <= num ; i++){
        res = fNum + sNum;
        fNum = sNum;
        sNum = res;
    }
    return res;
}

int main(){
    long long num ;
    cin >> num;
    cout << GetFibFastSolution(num) << endl;

    //cout << GetFibNaiveSolution(num) << endl;
    return 0;
}
