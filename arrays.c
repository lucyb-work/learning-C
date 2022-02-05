# include <stdio.h>

int main() {
    // datatype name[arraysize]
    int evens[6] = {2, 4, 6, 8, 10, 12};
    
    // you can also initialise without [arraysize] as its implied when you fill out the array
    int odds[] = {1, 4, 5, 7, 10, 11}; // Do not modify this line.
  
    printf("%i\n", evens[5]);

    // looping
    for (int i = 0; i < 6; i++) {
        printf("%i\n", odds[i]);
    
    }

    /* sizeof() returns byte size of array
    use sizeof(array)/sizeof(arrayDataType) to return length */
    int len = sizeof(odds)/sizeof(int);

    //2d arrays are cool
    int arr[9][9];
 
    int matrix[3][3] = {{2, 9, 11}, {3, 1, 4}, {8, 3, 1}};

    /* to access elements in 2D arrays:
    array[rowNumber - 1][columnNumber - 1];
    other fun stuff includes:
    rowDimension = sizeof(matrix)/sizeof(matrix[0]);
    columnDimension = sizeof(matrix[0])/sizeof(dataType); */

    int sum = 0;
    int rowDimension = sizeof(matrix)/sizeof(matrix[0]);
    int columnDimension = sizeof(matrix[0])/sizeof(int);
    for (int i = 0; i < rowDimension; i++) {
        for (int j = 0; j < columnDimension; j++) {
            sum += matrix[i][j];
        }
    }
    printf("%i\n", sum);

}