/* THIS IS JUST FOR RESEARCH, I DO NOT INTEND ON KEEPING THIS CODE*/

#include <stdio.h>

int main(){

int k; //sets the key value
char str[100]; //stores the characters entered
String e; //the result after encryption
char d; //the result after decryption
char c; //encrypted letter input
int option;
int i;

printf("Please enter a message:\n");
scanf("%s", &str);

printf("What would you like to do with the message?:\n")
printf("Encrypt (1)\n");
printf("Decrypt (2)\n");
scanf("%d", &option);

switch(option){
    case 1: 
    //printf("Please enter a number between 0 and 25 as the secret key:\n");
    //scanf("%d", &k);
    if(k<0 || k>25){
        printf("Please enter a number between 0 and 25\n");
        scanf("%d", &k);
    } else {
        for(i = 0; (i<50 && str[i] != "\0"); i++);
        str[i] = str[i] + k;
        printf("The message encrypted is: %s\n", str);
        break;
    }
    case 2:
    if(k<0 || k>25){
        printf("Please enter a number between 0 and 25\n");
        scanf("%d", &k);
    } else {
        for(i = 0; (i<50 && str[i] != "\0"); i++);
        str[i] = str[i] - k;
        printf("The decrypted message is: %s\n", str);
        break;
    }
    default: 
    printf("Invalid input");
}

char encrypt(char str[100], int k, String e, char m){
    printf("Please enter what you want encrypted.\n");
    scanf("%s", &str);
    printf("Please enter a number for the key between 0 and 25\n");
    scanf("%d", &k);
    while(k<0 || k>25){
        printf("Invalid number, please enter a number between 0 and 25\n");
        scanf("%d", &k);
    }
    e = (m+k)%26;
    printf("The encrypted message is: %s\n", e);   
}

char decrypt(char str[100], int k, String d, char c, int i){
    
}

/*e =(m+k)%26;
d = (c-k)%26;*/


return 0;
}