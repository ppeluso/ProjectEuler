//
//  9.cpp
//  1
//
//  Created by Peter Peluso on 6/14/16.
//  Copyright © 2016 Peter Peluso. All rights reserved.
//

#include <iostream>

int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    
    int a1 =1;
    int b1 = 1;
    int c1 = 1;
    
    for(a = 1; a < 1000; a++ )
    {
        a1 = a * a;
        for(b = 1; b < 1000; b++)
        {
            b1 = b*b;
            for(c =1; c < 1000; c++)
            {
                c1 = c*c;
                
                if(a1 + b1 == c1 )
                {
                    if( a + b +c ==1000)
                    {
                    std::cout << a <<',' << b <<',' << c << '\n';
                    std::cout<< a*b*c <<std::endl;
                    break;
                    }
                }
            }
        }
    }
}
