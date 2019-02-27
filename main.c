//
// Created by Ivo Georgiev on 2019-02-19.
//

#include <stdio.h>
#include <stdlib.h>

void pointer_test_int() {
    int value = 8;
    int * p = &value;
    int test = &value;

    printf("value: %d, p: %d, *p: %d, test: %d", value, p, *p, test);   //can't dereference a variable if its not a pointer
}

void pointer_test_float() {
    float value = 190.55;
    float * fp = &value;

    printf("address: %d, value: %f", fp, *fp);
}

void pointer_test_char() {
    char name = 'D';
    printf("%c\n", name);

    char * my_name = "Devin";
    printf("mem address: %d, value: %s, ascii: %d|%d|%d|%d|%d", my_name, my_name, *my_name, *(my_name + 1), *(my_name + 2), *(my_name + 3), + *(my_name + 4));

}

void print_int_array(int iarray[], int isize) {
    printf("int array[%d] = {", isize);
    for (int i = 0; i < isize - 1; i++) printf("%d, ", iarray[i]);
    printf("%d}\n", iarray[isize - 1]);
}

void pointer_test_int_array() {
    int my_array[] = {0, 1, 2, 3, 4};
    int size = sizeof(my_array)/ sizeof(my_array[0]);
    printf("  (my_array) | *(my_array + i)\n"); // *(my_array + i) == my_array[i]
    printf("  mem address |      value\n");
    for (int i = 0; i < size; i++) {
        printf("%d:   %d   |        %d\n", i, (my_array + i), *(my_array + i), i);
    }
}

void array_size_test() {
    int my_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(my_array)/ sizeof(my_array[0]);

    print_int_array(my_array, size);
    printf("size: %d\n", size);

    printf("sizeof(array): %d\n", sizeof(my_array));
    printf("sizeof(array[0]): %d\n", sizeof(my_array[0]));
    printf("sizeof(my_array)/sizeof(my_array[0]): %d\n", sizeof(my_array)/sizeof(my_array[0]));
}

void swap_ends(int iarray[], int isize) {  // passing the size of the array is good practice
    // usually, the type is size_t, which can hold the
    // largest possible size (usually equivalent to
    // long long (you don't need to remember this now)
    // standard safe swap code
    int tmp = iarray[0];          // remember that iarray is of type int*, but iarray[n] is int
    iarray[0] = iarray[isize - 1];
    iarray[isize - 1] = tmp;
}

void swap_ends_do() {
    int iarray[5] = {1, 2, 3, 4, 5};
    int isize = sizeof(iarray)/sizeof(iarray[0]);

    print_int_array(iarray, isize);
    swap_ends(iarray, isize);
    printf("swapping ends...\n");
    print_int_array(iarray, isize);

}

int dynamic_allocation() {
    // explicit allocation of an integer on the heap
    int *array_size = (int *) malloc(sizeof(int));
    int size = 8;

    // check if the allocation was successful
    // if it was, the pointer will be non-NULL
    if (array_size == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 1;
    } else {
        *array_size = 10;
    }

    // explicit allocation of an integer array on the heap
    int *int_array = (int *) malloc(*array_size * sizeof(int));

    // check if the allocation was successful
    // if it was, the pointer will be non-NULL
    if (int_array == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 0;
    } else {
        for (int i = 0; i < *array_size; i ++) {
            int_array[i] = i * *array_size;
            printf("Array element %d holds %d\n", i, int_array[i]);
        }
    }

    // free the allocated memory:
    // dynamically allocated memory
    // has to be released explicitly
    free(array_size);
    array_size = NULL; // this is good practice in case
    // the pointer might get reused

    free(int_array);
    int_array == NULL;

    return 0;
}

int main() {
    //pointer_test_int();
    //pointer_test_int_array();
    //pointer_test_float();
    //pointer_test_char();
    //array_size_test();
    //swap_ends_do();

    return dynamic_allocation();
}