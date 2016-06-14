#include <iostream>
#include <cstring>
int main()
{
    std::string norm;
    std::string test;
    std::string rev;
    int a;
    int b;
    int dum;
    
    for(int i = 100; i < 999; i++)
    {
        for(int j = 100; j < 999; j++)
        {
            a = i * j;
            
            norm = std::to_string(a);
            
            test = std::to_string(a);
            
            reverse(test.begin(), test.end());
           
            if( test == norm)
            {
                std::cout<< norm<<std::endl;
            }
        }
    }
}