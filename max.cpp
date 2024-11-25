#include <iostream>
using namespace std;
int main(){
    int a[6]= {13,6,4,8,7,9};
    int max = 0;
    for (int i =0 ; i<6 ; i++){
        if(max<a[i])
        max = a[i];
    }
    cout << max;
}