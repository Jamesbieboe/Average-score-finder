
#include <stdio.h>

// the point of this code is to find the average of any scores put in

float avg; // This is the final average post division
int totalScores; // This is the total # of scores you want to find the average of
float sum; // Sum of all scores

int main(void){
    
    printf("Welcome this program will find the average grade of all the scores you have.\n");
    
    printf("how many scores do you have?\n");
    
    scanf("%d", &totalScores ); //This value is stored in total scores
     
    float score[totalScores];   
    // The array, scores, goes up till the number you entered before in totalScores
     
     for( int j = 0; j < totalScores; j++){
        //This for loop will incriment the array so values can be stored in
         
         
        printf("what was your %d grade?\n", j + 1);
        // This allows the code to ask you to enter a value for a specific element of the array. It adds 1         cuz all arrays start at 0
 
        scanf("%f", &score[j]); // stores input value into the element which is being incrimented by j
         
         sum += score[j]; 
         // This means add the sum by every score in the elements. Its the same as sum = sum + score[j]

     }
    
    avg = sum / totalScores; // finds the average 
    
    printf("Your average is %f", avg); // prints the average
 
}