 // Name: M Zain ul Abideen
    // ID: F2023065161
    // Section W-5 : DSA BILAL ARIF
    // Activity : 01


#include <iostream>
#include"Array.h"

using namespace std;

int main()
{

    int limit=0;
    cout << "Current Limit of Array " << endl;
    cin >> limit;
    int capacity=0;
    cout << "Total Capacity  of Array " << endl;
    cin >> capacity;
    if (limit > capacity) {
        cout << "Error" << endl;
        return 1;
    }

    int* arr = new int[capacity];
    for (int i = 0; i < limit; i++) {
        cout << "Element " << i + 1<<" : ";
        cin >> arr[i];
}

    Array*objA=new Array(arr,limit,capacity);
  //Do what you want to do in function
      delete[]arr;
    return 0;
}
