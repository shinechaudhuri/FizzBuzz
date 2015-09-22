//
//  main.c
//  FizzBuzz
//
//  Created by Shine Chaudhuri on 2015-07-29.
//  Copyright (c) 2015 Shine Chaudhuri. All rights reserved.
//

#include <stdio.h>

int main()
{
    for(int i=1; i <= 100; i++)
    {
        if (i % 3 == 0)
            printf("Fizz\n");
        if (i % 5 == 0)
            printf("Buzz\n");
        if ((i % 3 == 0) && (i % 5 == 0))
            printf("FizzBuzz");
    }
    return 0;
}