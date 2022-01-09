#include <stdio.h>

// I considered 0 and 1 as the first two elements in the Fibonacci sequence.
/* In this program a user can enter their preferred index of the element in the Fibonacci sequence and the program is capable
of printing up to 40 elements of the Fibonacci sequence*/

int index;  //Defines the variable to select your preferred index of the Fibonacci sequence
int n=1;    //Iteration number of the Fibonacci function
int i=0;    //First number of the Fibonacci function
int j=1;    //Second number of the Fibonacci sequence
int k=0;    //n-th element of the Fibonacci sequence

void Fibonacci(index){
    int Fibonacci_array[40];  //Defines an array to store elements of the Fibonacci sequence
    for ( n=1; n<= index; n++){

        if (n==1){ //Defines the first element of the Fibonacci sequence
            k=0;
            Fibonacci_array[n]=k;
        }
        else if (n==2){ //Defines the second element of the Fibonacci sequence
            k=1;
            Fibonacci_array[n]=k;
        }
        else if (n>2){ //Calculate n th element of the Fibonacci sequence
            k=i+j;
            i=j;
            j=k;
            Fibonacci_array[n]=k;
        }

    }
    int element=1;
    for (element=1; element<=index;element++){ //Prints stored elements from the array
        printf("%d" "%c",Fibonacci_array[element],' ');
    }


}

int main(){

printf ("Enter the index of Fibonacci number you need: \n");
scanf("%d",&index); //Retrieve the required Fibonacci sequence index from the user
if (index>0){

    Fibonacci(index); // Calls the Fibonacci function
}
else{
    printf("Enter a valid Fibonacci sequence index (a number greater than zero)"); //If the input is not a number greater than zero prints this statement
}
return 0;

}


