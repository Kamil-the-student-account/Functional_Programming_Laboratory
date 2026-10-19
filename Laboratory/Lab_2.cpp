#include"Lab_2.h"


int copy(int *arr_in, int size, int target, int *arr_out ) {
    if (size == 0) return 1;
    if (arr_in[0] == target) {
        arr_out[0] = target;
        return copy(arr_in + 1, size - 1, target, arr_out + 1);
    }else {
        return copy(arr_in + 1, size - 1, target, arr_out);
    }
}

int copy2(int *arr_in, int size, const std::function<bool(int)>& true_false, int *arr_out ) {
    if (size == 0) return 1;
    if (true_false(*(arr_in))) {
        arr_out[0] = arr_in[0];
        return copy2(arr_in + 1, size - 1, true_false, arr_out + 1);
    }else {
        return copy2(arr_in + 1, size - 1, true_false, arr_out);
    }
}

float square(float x) {
    return x * x;
}

FunAndArg to_Fun_and_arg(const std::function<float(float)>& f, float a) {
        FunAndArg ret;
        ret.fun = f;
        ret.arg = a;
        return ret;
}
void show_arr(int const *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " " ;
    }
    std:: cout << std::endl;
}


int main(int agc, char* argv[]) {
    return 0;
}