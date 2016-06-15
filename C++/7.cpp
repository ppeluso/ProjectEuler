//
//  7.cpp
//  1
//
//  Created by Peter Peluso on 6/14/16.
//  Copyright © 2016 Peter Peluso. All rights reserved.
//

#include <iostream>

int main()
{
    bool prime = true ;
    int i = 4;
    while( i != 10001)
    {
        for(int j = 6; j < 1000000; j++)
        {
            prime = true;
            for(int k = 2; k < j/2; k++)
            {
                if( j % k == 0)
                {
                    prime = false;
                    break;
                }
            }
            
            if( prime ==true)
            {
                std:: cout << i << "   " << j << '\n';
                i++;
            }
        }
            

    }
}
