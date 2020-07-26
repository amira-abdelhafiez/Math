#include <bits/stdc++.h>
using namespace std;

/*
int MaxPairWiseProductByGetMax(long long arr[]& , int len){
    int index1 = -1;
    int index2;
    for(int i = 0 ; i < len ; i++){
        if(index1 == -1 || arr[index1] < arr[i]){
            index2 = index1;
            index1 = i;
        }
    }
    return (index1*index2);
}
*/

int main(){
    int n;
    cin >> n;

    long long arr[n+5];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr , arr+n);
    cout << (arr[n-1] * arr[n-2]) << endl;
    return 0;
}
