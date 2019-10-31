// Find the position of an element in an infinite sorted array
#include <iostream>
using namespace std;

int BinarySearch(int num, int arr[]) {

int low = 0, high = 1, mid = low + (high - low)/2;

while(arr[high] < num) {
    low = high;
    high *= 2;
}


while(low <= high){
    mid = low + (high - low)/2;

    if(num == arr[mid]) {
        return mid;
    }

    if(num > arr[mid]) {
        low = mid + 1;
    }

    else if(num < arr[mid]) {
        high = mid - 1;
    }
     
}

return -1;

}

int main() 
{ 
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,  
                               140, 160, 170}; 
    cout << BinarySearch(7,arr);
    return 0; 
} 
