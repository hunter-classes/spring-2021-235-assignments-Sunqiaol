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


int stepPerms(int n){ //n = number step
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 4;
    }
    else{
        return stepPerms(n-1) + stepPerms(n-2) + stepPerms(n-3);
    }

}


int main(){
    for(int i =0;i<=10;i++){
        cout<<fib(i)<<", ";
    }
    cout<<endl;
    for(int i =0;i<=10;i++){
        cout<<fibiter(i)<<", ";
    }
    cout<<endl;
    for(int i =1;i<=7;i++){
        cout<<stepPerms(i)<<", ";
    }
    return 0;
}