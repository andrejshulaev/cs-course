#include <stdio.h>




void arrayProblem(){
    int m1, m2, m3, per;
    for (int i = 0; i < 3; i++){
        printf("Enter Marks:\n");
        scanf("%d%d%d", &m1, &m2, &m3);
        // Calculates percentage of each student
        per = (m1+m2+m3)/3;
        printf("%d\n", per);
    }
    // Only percentage of last student is available to us
    printf("Percentage of last student is %d\n", per);

}


void arraySolution(){
    int m1, m2,m3;
    // Defines an array per that can store 3 integer values
    int per[3];
    for (int i = 0; i < 3; i++){
        printf("Enter Marks:\n");
        scanf("%d%d%d", &m1, &m2, &m3);
        // Stores percentage of each student in an array per
        per[i] = (m1+m2+m3)/3;
    }

    for (int i = 0; i < 3; i++){
        printf("Percentage of student %d is %d\n", i+1 , per[i]);
    }
}


void what_is_array(){
    arrayProblem();
//    arraySolution();
}


void inOneStep(){
    // Initializing array without size
    int a[] = {7,6,11,-2,26};
    // Initializing array with size (not compulsory)
    int c[10] = { 16, 13, -8, -7, 25 };
    printf("%d , %d\n", a[0], c[0]);
    // Set the value of array element later in a program
    c[7] = 90;
    /* Printing size of array a and b
    size of array = sizeof(int) * number of elements in array
    */
    printf("%ld , %ld", sizeof(a), sizeof(c));
}

void inDifferentSteps(){
    // defining array
    int b[10];
    // The line given below will generate an error since size is not defined
//    int c[];
    // garbage value stored in b[0]
    printf("%d\n", b[0]);
    printf("%ld\n", sizeof(b));
    // initializing array
    b[0] = 3 , b[1] = 5;
    printf("%d\n", b[0]);
}

void initWithZeros(){
    // defining array
    static int b[10];
    int i;
    for (i = 0; i < 10; i++){
        // Accessing array elements
        printf("%d\n", b[i]);
    }
}

void arrayInitialization(){
//    inOneStep();
//    inDifferentSteps();
    initWithZeros();
}

void ordinalVars(){
    int i =3, j = 20, k = -5, l = 7, m =11;
    // Prints address of ordinary variables
    printf("%u %u %u %u %u\n", &i, &j, &k, &l, &m);
}

void arrayElements(){
    int a[] = {3,20,-5,7,11};
    int i;
    for (i = 0; i <= 4; i++){
        // Prints address of array elements
        printf("%u ", &a[i]);
    }
    printf("\nSize of array = %ld", sizeof(a));
}


void arrayAndMemory(void){
    ordinalVars();
    arrayElements();
}


void logicOperationsExamples(void){
    int a = 10, b = 5, c = 2;
    char ch = 'a';

    printf("%d\n", b > c );

    printf("%d\n", a == b*c );
    printf("%d\n", a != b*c );
    printf("%d\n", a < c );
    printf("%d\n", b >= c + 3 );
    printf("%d\n", -1 <= 2 );
    printf("%d\n", ch == 'a');
    printf("%d\n", ch != 'a');

    printf("%d\n", ch == 97);


}


void logicalNOT(void){
    int a = 10, b = 5, c = 2;

    printf("%d\n", a == b*c );
    printf("%d\n", !(a == b*c) );
    printf("%d\n", a != b*c );
    printf("%d\n", !(a != b*c) );

}

void logicalAND(void){

    printf("%d\n", 1 && 1 );
    printf("%d\n", 1 && 0 );
    printf("%d\n", 0 && 1 );
    printf("%d\n", 0 && 0 );

}

void logicalOR(void){
    printf("%d\n", 1 || 1 );
    printf("%d\n", 1 || 0 );
    printf("%d\n", 0 || 1 );
    printf("%d\n", 0 || 0 );
}


void logicOperations(void){
    logicOperationsExamples();
    logicalNOT();
    logicalAND();
    logicalOR();

    /*
     Operators priority:
        1) parenthesis
        2) NOT
        3) AND
        4) OR
     */
}


void ifelseSyntax(void){
    if ( 1 )
        printf("TRUE!\n");
    else
        printf("FALSE!\n");

}


void falseValue(void){
    if ( 0 )
        printf("FALSE!\n");
}


void multipleOperators(void){
    int x = 0;
    scanf("%d", &x);

    if ( x < 0 ){
        printf("x = %d\n", x);
        x = (-1 )*x;
    }

    printf("%d\n", x);
}


void multipleIfElseStatements(void){
    int x = 0;
    scanf("%d", &x);

    if ( x < 0 ) {
        printf("Negative!\n");
    } else {
        if ( x == 0 ){
            printf("Zero!\n");
        } else {
            printf("Positive!\n");
        }
    }
}


void ifElseClause(void){
    ifelseSyntax();
    falseValue();
    multipleOperators();
    multipleIfElseStatements();
}



int main() {
//    logicOperations();

//    ifElseClause();
//    what_is_array();
    arrayInitialization();
//    arrayAndMemory();

}
