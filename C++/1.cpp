//
//  main.cpp
//  1
//
//  Created by Peter Peluso on 6/13/16.
//  Copyright © 2016 Peter Peluso. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int i = 0;
    int track = 0;
    
    for( i = 0; i <1000; i++)
    {
        if( i %3 == 0)
        {
            track += i;
            
        }
        
        else if (i % 5 ==0)
        {
            track += i;
        }
        
        else
            track += 0;
        
    }
    
    cout << track;
}

