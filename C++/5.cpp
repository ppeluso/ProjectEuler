//
//  5.cpp
//  1
//
//  Created by Peter Peluso on 6/14/16.
//  Copyright © 2016 Peter Peluso. All rights reserved.
//

#include <iostream> 

int main()
{
    bool div = false;
    int i=1;
    
    while(div == false)                                 // while number not found
    {
        if(i%11==0 && i%12==0 && i%13==0
           && i%14==0 && i%15==0 && i%16==0
           && i%17==0 && i%18==0 && i%19==0
           && i%20==0)                                  // check for if num div by 11-20
        {
            printf("%d\n", i);                          //if number found print
            div = true;                                 // div = true for while to stop
        }
        
        i++;                                            //while not found increment i 
    }
    
    return 0;
}
  
    

