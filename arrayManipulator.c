
/*
 * Author: Maya Al Hourani
 * Purpose: Accept integers seperated by spaces, place integers into array and work on the integers found in the array.
 */
#include <stdio.h>

    //Function to list each index's value in array.
    void partOne(int userArray[], int size){
        printf("Your array is: ");

        //Looping through array and printing every element with its index.
        for (int i = 0; i < size; i ++){
            printf("[%d] = %d, ",i,userArray[i]);
        }
    }

    //Return the largest element in the array.
    void partTwo(int userArray[], int size){
        int largest;

        //Looping through array, making largest a temporary value from array, and replacing it if a bigger value is found.
        largest = userArray[0];
        for (int i = 0; i < size; ++i) {
            if (largest < userArray[i]) {
                largest = userArray[i];
            }
        }

        printf("The largest value in your array is: %d", largest);
    }

    //Returns array in reverse order.
    void partThree(int userArray[], int size){
        printf("Your array in reverse is:");

        //looping through array backwards and printing it to reverse order.
        for (int i = size - 1; i >= 0; i--) {
            printf(" %d", userArray[i]);
        }

    }

    //Calculates sum of all array values.
    void partFour(int userArray[], int size){
        int sum = 0;

        //Looping through array and incrementing sum variable by each value in array index.
        for (int i = 0; i < size; i++){
            sum += userArray[i];
        }

        printf("The sum of all values in your array is: %d", sum);
    }

    //Sorting array in descending order
    void partFive(int userArray[], int size){
        //creating temporary array to manipulate.
        int tmpArray[size];
        for(int i = 0; i < size; i++){
            tmpArray[i] = userArray[i];
        }

        //to hold values of array.
        int tmpValue;

        //Looping through to compare values, and using tmpValue to store latest element, then replacing it if its bigger.
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if (tmpArray[j] < tmpArray[i]){
                    tmpValue = tmpArray[i];
                    tmpArray[i] = tmpArray[j];
                    tmpArray[j] = tmpValue;
                }
            }
        }

        printf("Your array in sorted order is:");
        for (int i = 0; i < size; i++){
            printf(" %d", tmpArray[i]);
        }

    }

		//Returns the array with the first and last element swapped.
    void partSix(int userArray[], int size){
        //creating temporary array to manipulate.
        int tmpArray[size];
        for(int i = 0; i < size; i++){
            tmpArray[i] = userArray[i];
        }

        int firstValue = tmpArray[0];
        int lastValue = tmpArray[size-1];

        printf("Your array with first and last element switched is:");
        printf(" %d", lastValue);
        for(int i = 1; i < size-1; i++){
            printf(" %d", tmpArray[i]);
        }
        printf(" %d", firstValue);
    }

int main() {

    int userInput;

    //Asking user for how many integers to store.
    printf("Please enter the number of integers to process:");
    scanf(" %d", &userInput);

    int array[userInput];

    //Seeing if it fits.
    printf("There is enough room in your array for %d integers (%d bytes)",userInput, sizeof(array));

    //Collecting user's values for array using for loop.
    printf("\nPlease enter your integers separated by spaces: ");
    for (int i = 0; i < userInput; i++){
        scanf(" %d", &array[i]);
    }

    printf("Part 1: \n\t");
    partOne(array,userInput);

    printf("\nPart 2: \n\t");
    partTwo(array,userInput);

    printf("\nPart 3: \n\t");
    partThree(array,userInput);

    printf("\nPart 4: \n\t");
    partFour(array,userInput);

    printf("\nPart 5: \n\t");
    partFive(array,userInput);

    printf("\n Part 6: \n\t");
    partSix(array, userInput);

    return 0;
}