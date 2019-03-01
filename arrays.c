//
// Created by Devin on 2/28/2019.
//

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