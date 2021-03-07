// Merge From Anum Jabeen
// Msort From gianna ajello
#include<iostream>
#include<vector>

using namespace std;


std::vector<int> merge(std::vector<int> left, std::vector<int> right){
    std::vector<int> result;
    while(left.size() > 0 || right.size() > 0){
      if(left.size() > 0 &&  right.size() > 0){
          if(left[0] <= right[0]){
            result.push_back(left[0]);
            left.erase(left.begin());
          }else{ 
            result.push_back(right[0]);
            right.erase(right.begin());
          }
      }
   
      else if(left.size() > 0){
          for(int i = 0; i < left.size(); i++){
              result.push_back(left[i]); 
          }
          break;
      }
      else if(right.size() > 0){
          for(int i = 0; i < right.size(); i++){
              result.push_back(right[i]); 
          }
          break;
      }
    }    
    return result;
}
std::vector<int> msort(std::vector<int> in)
{
   std::vector<int> left;
   std::vector<int> right;
   std::vector<int> result;
  
   int mid = ((int)in.size()+1) / 2;
   int vecSize = (int)in.size();
  
   if (in.size() <= 1) //cannot be a left and right side if array is less than one or equal to one,too small!
   {
      return in;
   }
 
   int lefti = 0; 
   while(lefti < mid)  
   {
      left.push_back(in[lefti]);
      lefti++;
   }

   int righti = mid; 
   while(righti < vecSize) 
   {
      right.push_back(in[righti]);
      righti++;
   }
 
   left = msort(left);
   right = msort(right);
   
   return merge(left, right);
}

int main(){
    std::vector<int> unsorted = {100,20,4,1,20,60,40,0};
    std::vector<int> sorted = msort(unsorted);
    for(int i =0;i<sorted.size();i++){
        cout<<sorted[i]<<", ";
    }
}