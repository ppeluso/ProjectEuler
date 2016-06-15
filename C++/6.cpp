//
//  6.cpp
//  1
//
//  Created by Peter Peluso on 6/14/16.
//  Copyright © 2016 Peter Peluso. All rights reserved.
//

#include <iostream>

int main()
{
    int sum = 0;
    int sq = 0;
    int diff = 0;
    
    for(int i = 1; i < 101;i++)
    {
        sq += i * i;
    }
    
    for (int j = 1; j < 101; j++)
    {
        sum += j;
    }
    
    
    sum = sum * sum;
    
    diff = sum-sq ;
    
    std::cout << diff;

}
