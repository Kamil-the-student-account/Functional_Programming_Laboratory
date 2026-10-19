#ifndef FUNCTIONAL_PROGRAMMING_LAB_2_H
#define FUNCTIONAL_PROGRAMMING_LAB_2_H

#include<iostream>
#include<functional>

/*
 * Function copy() has been searching for a target value in a input array (arr_in)
 * and copy that values to next positions in a new output array
 */
int copy(int *arr_in, int size, int target, int *arr_out );

/*
 * Function copy2() generalise copy() taking any kind of boolian statement
 * as a target e.g. number % 2 or number < 10
 */
int copy2(int *arr_in, int size,const std::function<bool(int)>& true_false, int *arr_out );

/*
 * Simple taking to second power the float number
 */
float square(float x);

/*
 * Struct FunAndArg contains the pointer to the function and the argument as a float
 */
struct FunAndArg{
    std::function<float(float)> fun;
    float arg;
};

/*
 * to_Fun_and_arg() has been combining the function and the argument to the struct
 */
FunAndArg to_Fun_and_arg(const std::function<float(float)>& f, float a);

/*
 * show_arr() is a function displaying next values of the array in a order
 */
void show_arr(int *arr, int size);

#endif //FUNCTIONAL_PROGRAMMING_LAB_2_H