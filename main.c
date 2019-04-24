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
printf("Encrypt via Cesar Cipher (1)\n");
printf("Decrypt via Cesar Cipher (2)\n");
printf("Encrypt via Substitution (3)\n");
printf("Decrypt via Substitution (4)\n");
scanf("%d", &option);

switch(option){
    case 1: 
    encryptc(str);
    break;
    case 2:
    decryptc(str);
    break;
    case 3:
    //insert fucntion here
    case 4:
    //insert function here
    default: 
    printf("Invalid input");
}

char encryptc(char str[100], int k, int i){
    printf("Please enter a number for the key between 0 and 25\n");
    scanf("%d", &k);
    while(k<0 || k>25){
        printf("Invalid number, please enter a number between 0 and 25\n");
        scanf("%d", &k);
    for(i = 0; (i < 100 && str[i] != "\0"); i++);
    if(str[i] > 97 || < 122){
        str[i] = ((str[i] + k)%26) - 32;
    } else if(str[i] < 65 || > 90){
        str[i] = str[i];
    } else {
        str[i] = (str[i] + k)%26;
    }
    printf("The encrypted message is: %s\n", str);
    return(0);
}

char decryptc(char str[100], int k, int i){
    printf("Please enter a number for the key between 0 and 25\n");
    scanf("%d", &k);
    while(k<0 || k>25){
        printf("Invalid number, please enter a number between 0 and 25\n");
        scanf("%d", &k);
    for(i = 0; (i < 100 && str[i] != "\0"); i++);
    if(str[i] > 97 || < 122){
        str[i] = ((str[i] - k)%26) - 32;
    } else if(str[i] < 65 || > 90){
        str[i] = str[i];
    } else {
        str[i] = (str[i] - k)%26;
    }
    printf("The decrypted message is: %s\n", str);
}

/*e =(m+k)%26;
d = (c-k)%26;*/


return 0;
}