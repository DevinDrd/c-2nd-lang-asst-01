//
// Created by Devin on 2/28/2019.
//

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