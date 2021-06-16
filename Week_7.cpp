// Write a program that uses two identical arrays of just eight integers.
// It should display the contents of the first array, then call a function
// to sort the array using an ascending order bubble sort modified to print
// out the array contents after each pass of the sort.Next, the program should
// display the contents of the second array, then call a function to sort the
// array using an ascending order selection sort modified to print out the
// array contents after each pass of the sort.

#include <iostream>
using namespace std;

const int SIZE = 8;
int numArrayOne[SIZE] = {6, 3, 2, 7, 5, 1, 4, 8};
int numArrayTwo[SIZE] = {6, 3, 2, 7, 5, 1, 4, 8};

void printArray(int voidArray[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << voidArray[i];
    }
    cout << endl;
}

void bubbleSort(int bubbleArray[])
{
    bool swap;
    int temp;

    printArray(bubbleArray);

    do
    {
        swap = false;
        for (int b = 0; b < (SIZE - 1); b++)
        {
            if (bubbleArray[b] > bubbleArray[b + 1])
            {
                temp = bubbleArray[b];
                bubbleArray[b] = bubbleArray[b + 1];
                bubbleArray[b + 1] = temp;
                swap = true;
            }
            printArray(bubbleArray);
        }
    } while (swap);
}

void selectionSort(int selectionArray[])
{
    int startScan, minIndex, minValue;

    printArray(selectionArray);

    for (startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        minIndex = startScan;
        minValue = selectionArray[startScan];
        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (selectionArray[index] < minValue)
            {
                minValue = selectionArray[index];
                minIndex = index;
            }

            printArray(selectionArray);
        }
        selectionArray[minIndex] = selectionArray[startScan];
        selectionArray[startScan] = minValue;

        // printArray(selectionArray);
    }
}

int main()
{
    bubbleSort(numArrayOne);
    cout << "- - - - - - - -" << endl;
    selectionSort(numArrayTwo);
}