#include <iostream>
#include <string>
 
using namespace std;
 
void bubbleSortI(int[], int);
void displayArrayI(int[], int);
void bubbleSortS(string[], int);
void displayArrayS(string[], int);
 
int main()
{
    string user_inputS = ""; // string for user input
    string arrS[5]; // string array
    int arrI[5]; // integer array
    int user_inputI = 0; // integer for user input
    
    for(int i = 0 ; i < 5; i++){ //get list of names from user
    cout<<"Please enter a list of names";
    cin >> user_inputS;
    arrS[i] = user_inputS; //fill the array with names
}
 
    for(int j = 0; j < 5; j++){ //get list of integers from user
    cout<< "Please enter a list of numbers";
    cin >> user_inputI;
    arrI[j] = user_inputI; // fill the array with integers
}
 
  
  int lenI = sizeof(arrI)/sizeof(arrI[0]); // length of the integer array
  int lenS = sizeof(arrS)/sizeof(arrS[0]); // length of the string array
  
  bubbleSortI(arrI,lenI); // sorts the integer array
  displayArrayI(arrI, lenI); //displays the sorted integer array
  bubbleSortS(arrS,lenS); // sorts the string array
  displayArrayS(arrS, lenS); //displays the sorted string array
  return 0;
}
 
// function to sort the integer array
void bubbleSortI(int arr [], int length){
    
    int temp = 0; // temporary variable
    for(int i = 1; i < length - 1; i ++){ // for loop to sort the list over each iteration
        for( int j = 0; j < length - i - 1 ; j++){ // for loop to compare each integer
            if( arr[j] > arr[j+1]){
                temp = arr[j]; // assign the value at index j to the temporary variable to make swapping easier
                arr[j] = arr[j+1]; // swap the values
                arr[j+1] = temp; // re assign j+1 to the temporary variable
            } 
       }
    }
    
}// display the sorted integer array
void displayArrayI(int arr[], int length){
    for(int i = 0; i < length ; i++){
        cout << arr[i];
    }
}
// function to sort the string array
void bubbleSortS(string arr [], int length){
    
    string temp = ""; // temporary variable
    for(int i = 1; i < length - 1; i ++){ // for loop to sort the list over each iteration
        for( int j = 0; j < length - i - 1 ; j++){ // for loop to compare each integer
            if( arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
       }
    }
    
}// display the sorted string array
void displayArrayS(string arr[], int length){
    for(int i = 0; i < length ; i++){
        cout << arr[i];
    }
}
