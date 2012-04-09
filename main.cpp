/* 
 * File:   main.cpp
 * Author: evanchapman
 *
 * Created on April 9, 2012, 11:26 AM
 */

#include <cstdlib>
#include <iostream>
#include "range.h"
#include "random.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    
    cout << "This is a test" << endl;
    
    range newRange;
    
    newRange.high = 20;
    newRange.low = 10;
    
    
    cout << random(newRange);
   
    
    
    return 0;
    
    
    
    
}

