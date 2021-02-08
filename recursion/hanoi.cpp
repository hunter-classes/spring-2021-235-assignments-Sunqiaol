#include<iostream>
using namespace std;
/*
 * 
 can only move one disc at a time
discs must be either in transit or on a tower (never on the ground)
you can never place a larger disc on a smaller disc
*/

void hanoi(int n, char src, char dst, char tmp){
  // base case is when n = 1 - just print out the move
  // otherwise, figure out the recursive call part
    if(n==1){
        cout<<"Moving Ring "<< n <<" From "<< src<< " To " <<dst <<endl;
    }
    else{
        hanoi(n-1,src,tmp,dst);
        cout<<"Moving Ring "<<n<< " From "<< src << " To "<<dst<<endl;
        hanoi(n-1,tmp,dst,src);
    }
}

int main(){
    for(int i =1;i <=5;i++){
        cout<<i<<endl;
        hanoi(i,'a','b','c');
    }
}