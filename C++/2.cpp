//
//  2.cpp
//  1
//
//  Created by Peter Peluso on 6/13/16.
//  Copyright © 2016 Peter Peluso. All rights reserved.
//

#include <stdio.h>
#include <iostream>
int main()
{
    int fib[100];
    fib[0] = 1;
    fib[1] = 1;
    
    for( int i = 2; i < 33; i++)
    {
        fib[i] = fib[i-1]+fib[i-2];
        std::cout<< fib[i];
        std::cout<< '\n';
    }
    
    int count;
    
    for ( int i = 2; i < 33; i++)
    {
        if( fib[i] %2 == 0)
        {
            count += fib[i];
        }
        
        else
        {
            count += 0;
        }
    }
    std::cout <<"count is:"<< count;
}
