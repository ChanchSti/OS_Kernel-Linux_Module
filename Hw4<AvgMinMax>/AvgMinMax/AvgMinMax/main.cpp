//
//  main.cpp
//  AvgMinMax
//
//  Created by Jose Saldivar on 11/20/19.
//  Copyright © 2019 Jose Javier Saldivar. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    int foo[7] ={90,81,78,95,79,72,85};
    // prime numbers 79     //
    
    // print
    for(int i=0; i<7; i++)
    {
        cout << foo[i] << ", ";
    }
    
    
    
    int size;
    cout << "Enter array size" << endl;
    cin >> size;
    //cout << "Enter values wanting to add" << endl;
    //cin >> values;
    int arr[size];
    
    // insert
    for(int i=0; i<size; i++)
    {
        cout << "Enter value wanting to add" << endl;
        cin >> arr[i];
    }
    // print
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << ", ";
    }
    // find HIGH
    int high = 0;
    int low = arr[0];
    int add = 0;
    int avg = 0;
    for(int i=0; i<size; i++)
    {
        if(high < arr[i])
        high = arr[i];
       
        if(low > arr[i])
        low = arr[i];
        
        add = add + arr[i];
        avg = add / size;
    }
    cout << "\nHigh= " << high << endl;
    cout << "Low= " << low << endl;
    cout << "Avg= " << avg << endl;
     
}
