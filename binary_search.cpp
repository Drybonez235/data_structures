//g++ --std=c++20 binary_search.cpp
#include <iostream>
#include <cmath>
#include <vector>

//HIGH IS EXCULISE, LOW is inclusive. When doing stuff with high, be exclusive. So because of this, we inclrease low by one so that we aren't resuing that value. Because if low was 0, we would be checking 0. If high was 10, we would be checking 9.
using namespace std;

int main(){
    
    vector<int> sorted_array = {0, 1, 2, 3, 4, 6, 8, 9, 20, 30};
    int high = sorted_array.size();
    int low = 0;
    int mid = low + (high - low) / 2;
    int target = 3;
    
    while(low < high){
        mid = low + (high - low) / 2;
        int current = sorted_array[mid];
        if(current == target){
            cout << "you found it!" << endl;
            break;
        } else if(current > target){
            high = mid;
        } else{
            low = mid + 1;
        }
    }
    return 0;
}

//int length = sorted_array.size();
//        int target = 1;
//        int low = 0;
//        int high = length;
//        //int current = floor(() / 2);
//
//        //int mid = ((high ^ low) >> 1) + (high & low);
//    int mid = (low + (high - low)) / 2; //When dividing with ints the floor is ALWAYS taken. It is not rounded. 1.99 as an int is 1.
//    while(low < high){
//        mid = low + (high - low) / 2;
//        cout << "the mid point is now " << mid << endl;
//        if(sorted_array[mid] == target){
//            cout << "we got em!" << endl;
//            break;
//        } else if(sorted_array[mid] > target){
//            cout << "current value is greater then the target" << endl;
//            high = mid;
//            cout << "high is changed to " << high << endl;
//        }  else {
//            cout << "current value is less then target" << endl;
//            low = mid + 1;
//            cout << "low is changed to " << low << endl;
//        }
