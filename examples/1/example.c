void add(int a, int b) {
    // executing stack 2 -2 after these instructions gives:
    //   0xFFFFFFFFFFFFFFFF
    //   0xEEEEEEEEDDDDCC00
    long long int addition = a + b;
}

int main(void) {
    // pwndbg `stack 1 38` after this instruction outputs:
    //   1
    long long int local = 1;


    // pwndbg `stack 2 -2` after this instruction outputs:
    //   0xFFFFFFFFFFFFFFFF
    //   0xEEEEEEEEDDDDCC00
    long long int size_8_bytes = 0xFFFFFFFFFFFFFFFF;
    int size_4_byes = 0xEEEEEEEE;
    short size_2_bytes = 0xDDDD;
    char size_1_bytes = 0xCC;
    char pad = 0; // padding to make last byte of second stack item 0


    // executing stack 4 -4 after these instructions gives:
    //   1
    //   2
    //   3
    //   "hello!\0"
    long long int array[] = {1, 2, 3};
    char greeting[] = "hello!";


    add(1, 2);

    return 0;
}