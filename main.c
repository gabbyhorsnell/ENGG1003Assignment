#include <stdio.h>


void caesarCipherEncrypt(void);
void caesarCipherDecrypt(void);
void enigmaCipherEncrypt(void);
void enigmaCipherDecrypt(void);

int main(void){
    // Menu for user
    printf("welcome to the encription decription program\n");
    printf("To use the caesar cipher encription please enter 1\n");
    printf("To use the ceaser cipher decription please enter 2\n ");
    printf("To use the enigma cipher encription please enter 3\n");
    printf("To use the enigma cipher decription please enter 4\n");
    // Scanf will be inserted here after the whole code is finnished
    int x=3;
 
    do{
        switch(x){
            case 1:
             caesarCipherEncrypt();  // Function for running the caesar cipher encription 
            break;
            case 2:
              caesarCipherDecrypt(); // Function for running the caesar cipher decription  
            break;
            case 3:
             enigmaCipherEncrypt(); //Function for running the enigma cipher encription
            break;
            case 4:
             enigmaCipherDecrypt();  //Function for running the enigma cipher decription 
            break;
            default:
            printf("invalid imput\n");
        }
    }while(x>4);
} 
// Function definition for caesar encription
void caesarCipherEncrypt(void){
    char msg[] = {"hello world"};
    //msg = {"hello world"};
    int rotation = 7 ;
    for(int n=0; n<12; n++){
        if(msg[n] != 32 && msg[n] != 0) {  
            msg[n] = msg[n] - 97; // Translating the ascii table
            msg[n] = msg[n] + rotation; // Moving the letters
            msg[n] = msg[n] % 26; // Accounting for the overflow i.e. z needs to move to the start of rotation
            msg[n] = msg[n] + 97; // Moving it back into the alaphabet 
        }

    }
     printf("%s\n", msg);
    
}
// Function definiton for caesar decription 
void caesarCipherDecrypt(void){
    char msg[] = {"olssv dvysk"};
    //msg = {"hello world"};
    int rotation = 7 ;
    for(int n=0; n<12; n++){
        if(msg[n] != 32 && msg[n] != 0){  
            msg[n] = msg[n] - 97; // Translating the ascii table
            msg[n] = msg[n] + (26 - rotation); // Making full rotation 
            msg[n] = msg[n] % 26; // Accounting for the overflow i.e. z needs to move to the start of rotation
            msg[n] = msg[n] + 97; // Moving it back into the alaphabet 
        }
    
  }
  printf("%s\n", msg);
}
 // Function definition for Enigma Encryption
 void enigmaCipherEncrypt(void){
     char l = 0 ;
     char msg[]= {"HELLO WORLD"}; //Hard coded message to encrypt
     char rotation[]={20, 14, 7, 24, 4, 6, 18, 1, 12, 7, 14, 24, 3, 15, 17, 19, 24, 23, 22, 25, 25, 16, 5, 8, 9, 3};
     for( int n=0 ; n < 26 ; n++){
           rotation[n] = rotation[n] + 64 ;          
        }
    for(int n = 0; n < 12; n++){
        if(msg[n] > 64 && msg[n] < 91){
        l= msg[n] ; 
        l = l - 64 ; // Moving ascii table numbers
        l = rotation[l]; // The message becomes the value in the rotation
        msg[n]= l; // Returning the l value back to the msg value
    }

        
    }
    for(int n = 0; n < 12; n++){
    printf("%c",  msg[n]);
}

 }
  
 
 // Function  definition for the decription of Enigma Cipher
void enigmaCipherDecrypt(void){
     char msg[]= {"LFCCS HSVCD"};
     char rotation[]={20, 14, 7, 24, 4, 6, 18, 1, 12, 7, 14, 24, 3, 15, 17, 19, 24, 23, 22, 25, 25, 16, 5, 8, 9, 3};
    for(int n = 0; n < 26; n++){
        rotation[n] = rotation[n] + 64;
    }
       for(int n=0 ; n < 1024 ; n++) {
          if(msg[n] > 64 && msg[n] < 91) { //Using only upercase letters 
             for(int m = 0; m < 26; m++){ 
                 if(msg[n] == rotation[m]){
                     msg[n] = (m + 64); 
                     break; // to prevent the computer from overflowing 
                }
           }
        }
      
    }
  printf("%s", msg);
}

    