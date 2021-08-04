#include <stdio.h>

#define ARRAY_SIZE 51


void DeclaringArrayWithConstants(void){
    int someArray[ARRAY_SIZE];
    const int EMP_SALARY = 35;
    float employee[EMP_SALARY];
}


void DeclaringArray(void) {
    // typeName ArrayName[size] = { list of values }

    int A[10];            // An array of ten integers; A[0], A[1], …, A[9]
    char name[20];        // An array of 20 characters
    float nums[50];       // An array of fifty floating numbers; nums[0], nums[1], …,nums[49]
    int table[5][10];     // A two dimensional array of integers
//    int C[];              // An array of an unknown number of integers; C[0], C[1], …, C[size-1]

}


void CopyingArray(void) {
    int list1[6] = {2, 4, 6, 8, 10, 12};
    int list2[6];
    for (int ctr = 0; ctr < 6; ctr++) {
        list2[ctr] = list1[ctr];
    }
    printf("Elements of list2 :\n");
    for (int ctr = 0; ctr < 6; ctr++) {
        printf("%d ", list2[ctr]);
    }
}


void TwoDimensionalArray(void){
    // Declare a two-dimensional array with 3 rows and 2 columns
    int table[3][2];
    // create and initialize  an array
    int matrix[3][2] = { {10, 22}, {33, 44}, {45, 78} };
    // or
    int sameMatrix[3][2] = {10, 22, 33, 44, 45, 78 };
    // or
    int anotherTable[3][2] = {
        {10, 22},
        {33, 44 },
        {45, 78 }
    };
}


int main(void) {
    DeclaringArray();
    return 0;
};