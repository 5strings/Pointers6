//
//  main.c
//  Pointing To functions
//
//  Created by Eun Jae Lee on 28/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  function_return_type *pointer_name (argument_type);
//  void (*add) (int,int);
//  pointer_name = &function_name;
//  pointer_name = function_name;
//  p = sum;
//  p = &sum;
//  p(10,20);
//  (*ptr)(10,20);
//  1.Function decralation 2. Fuction definition 3.Fuction calling

#include <stdio.h>

void add(int x, int y) {
    printf("First value %d \n", x);
    printf("Second value %d \n", y);
    printf("Addition is %d \n",x*y);
}

int main(int argc, const char * argv[]) {

    int a,b;
    void (*p)(int,int);
    p = add;
    
    printf("Enter two numbers \n");
    scanf("%d%d", &a,&b);
    (*p)(a,b);
    
    getchar();
    
}
