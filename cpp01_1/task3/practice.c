int ledDelay = 500;       // A normal variable
int *pDelay = &ledDelay; 


int main(){
    // A pointer storing the address of ledDelay
    int *pDelay = &ledDelay;
    
    // Print the value of ledDelay
    printf("%d\n", &ledDelay);
    
    return 0;
}
