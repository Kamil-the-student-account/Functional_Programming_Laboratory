#ifndef FUNCTIONAL_PROGRAMMING_LAB_2_H
#define FUNCTIONAL_PROGRAMMING_LAB_2_H

#include<iostream>
#include<functional>

/*
 * @brief Searches for a target values in the input array and copies them sequantially
 *
 * @param arr_in    Pointer to the source array.
 * @param size      Number of elements to evaluate.
 * @param target    The value to filter and copy.
 * @param arr_out   Pointer to the output array.
 * @return int      Status code (1 upon successful completion).
 */
int copy(int *arr_in, int size, int target, int *arr_out );

/*
 * @brief Generalizes copy() by using a custom boolean predicate.
 *
 * @param arr_in      Pointer to the source array.
 * @param size        Number of elemnts.
 * @param true_false  Predicate funtion returing true or false.
 * @param arr_out     Pointer to the output array.
 * @return int        Status code (1 upon successful completion).
 */
int copy2(int *arr_in, int size, const std::function<bool(int)>& true_false, int *arr_out );

/*
 * @brief Calculate the square of floating point number.
 *
 * @param x     Number to square.
 * @return float    Result of x * x.
 */
float square(float x);

/*
 * @brief Struct FunAndArg contains the pointer to the function and the argument as a float
 */
struct FunAndArg{
    std::function<float(float)> fun;
    float arg;
};

/*
 * @brief Combine a target function and an argument into a FunAndArg struct.
 *
 * @param f     Reference to the target function.
 * @param a     Float argument to be passed to the function.
 * @return FunAndArg Structure containing the function reference and argument.
 */
FunAndArg to_Fun_and_arg(const std::function<float(float)>& f, float a);

/*
 * @brief Prints array elements sequantially to standard output in order.
 *
 * @param arr   Pointer to the input array.
 * @param size  Number of elements in array.
 */
void show_arr(int *arr, int size);

#endif //FUNCTIONAL_PROGRAMMING_LAB_2_H