//
//  main.c
//  AssemblyDemo
//
//  Created by Akhzar Nazir on 26/01/2018.
//  Copyright © 2018 Akhzar Nazir. All rights reserved.
//

#include <stdio.h>

int myOperation(int x, int y);

int main(int argc, const char * argv[]) {
    int x = 10;
    int y = 20;
    int z = myOperation(x, y);
    printf("OutPut is = %d \n",z);
    return 0;
}
