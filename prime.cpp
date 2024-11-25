#include <iostream>
using namespace std;
int main(){
    bool isprime = true;
    int n = 11;
    int i =2;

    for(i =2; i <n-1 ; i++){
        if (n % i == 0){ 
            isprime = false;
            
        }
    }
    cout << isprime;
}