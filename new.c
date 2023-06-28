int main(){
    int input, i, j;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input==4){
        for (i = input; i >= 1; i--){
            for (j = 1; j <= i; j++) {
                printf("%d", i);
            }
        printf("\n");
        }
    }
    else{
        printf("Invalid input");
    }
    
    return 0;
}