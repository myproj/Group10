#include "functions.h"

int factorial(int n){
    if(n<0){
		printf("enter number again\n");
		return 0;
    }
    else if(n!=1){
		return(n * factorial(n-1));
    }
    else return 1;
}
