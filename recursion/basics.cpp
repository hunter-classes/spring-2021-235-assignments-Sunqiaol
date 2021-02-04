#include <iostream>

using namespace std;


int fib(int n){
    if(n<2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int fibiter(int n){
    int curr = 1;
    int next = 1;
    int temp;
    int result =1;
    if(n<2){
        return result;
    }
    else{
        for(int i =1;i<n;i++){
            temp = curr;
            curr = next;
            next = curr + temp;
        }
    }
    return next;
}


int main(){
    for(int i =0;i<=10;i++){
        cout<<fib(i)<<", ";
    }
    cout<<endl;
    for(int i =0;i<=10;i++){
        cout<<fibiter(i)<<", ";
    }
    return 0;
}