//
// Created by Devin on 2/28/2019.
//

void struct_test() {
    struct car {
        char * make;
        char * model;
        int hp;
    };

    struct car impala = {"Chevy", "Impala", "180"};

    printf("Make: %s\nModel: %s\nHP: %d", impala.make, impala.model, impala.hp);
}