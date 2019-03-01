//
// Created by Devin on 2/26/2019.
//

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