#include <stdio.h>


void caesarCipherEncrypt(void);
void caesarCipherDecrypt(void);
void enigmaCipherEncrypt(void);
void enigmaCipherDecrypt(void);

int main(void){
    printf("welcome to the encription decription program\n");
    printf("To use the caesar cipher encription please enter 1 \n");
    printf("To use the ceaser cipher decription please enter2 \n ");
    printf("To use the enigma cipher encription please enter 3\n");
    printf("To use the enigma cipher decription please enter 4 \n ");
    // Scanf will be inserted here after the whole code is finnished
    int x=1;
 
    do{
        switch(x){
            case 1:
             caesarCipherEncrypt();  // function for running the caesar cipher encription 
            break;
            case 2:
              //caesarCipherDecrypt(); // function for running the caesar cipher decription  
            break;
            case 3:
             //enigmaCipherEncrypt(); //function for running the enigma cipher encription
            break;
            case 4:
                //enigmaCipherDecrypt();  //function for running the enigma cipher decription 
            break;
            default:
            printf("invalid imput\n");
        }
    }while(x>4);
} 
// function definition for caesar encription
void caesarCipherEncrypt(void){
    char msg[] = {"hello world"};
    //msg = {"hello world"};
    int rotation = 7 ;
    for(int n=0; n<12; n++){
        if(msg[n] != 32){  
            msg[n] = msg[n] - 97; // translating the ascii table
            msg[n] = msg[n] + rotation; // moving the letters
            msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
            msg[n] = msg[n] + 97; // moving it back into the alaphabet 
        }

    }
    printf("%s\n", msg);
    
}
// function definiton for caesar decription 
void caesarCipherDecrypt(void){
    
}