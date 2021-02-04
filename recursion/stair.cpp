#include <iostream>

using namespace std;


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
    for(int i =1;i<=7;i++){
        cout<<stepPerms(i)<<", ";
    }
    return 0;
}