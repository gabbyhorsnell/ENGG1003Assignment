#include <stdio.h>


void caesarCipherEncrypt(void);
void caesarCipherDecrypt(void);
void enigmaCipherEncrypt(void);
void enigmaCipherDecrypt(void);

int main(void){
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
             caesarCipherEncrypt();  // function for running the caesar cipher encription 
            break;
            case 2:
              caesarCipherDecrypt(); // function for running the caesar cipher decription  
            break;
            case 3:
             enigmaCipherEncrypt(); //function for running the enigma cipher encription
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
        if(msg[n] != 32 && msg[n] != 0) {  
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
    char msg[] = {"olssv dvysk"};
    //msg = {"hello world"};
    int rotation = 7 ;
    for(int n=0; n<12; n++){
        if(msg[n] != 32 && msg[n] != 0){  
            msg[n] = msg[n] - 97; // translating the ascii table
            msg[n] = msg[n] + (26 - rotation); // making full rotation 
            msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
            msg[n] = msg[n] + 97; // moving it back into the alaphabet 
        }
    
  }
  printf("%s\n", msg);
}
 // function definition for Enigma Encryption
 void enigmaCipherEncrypt(void){
     char msg[]= {"HELLO WORLD"};
     char rotation[256]={
    0,   8, 109, 220, 222, 241, 149, 107,  75, 248, 254, 140,  16,  66 ,
    74,  21, 211,  47,  80, 242, 154,  27, 205, 128, 161,  89,  77,  36 ,
    95, 110,  85,  48, 212, 140, 211, 249,  22,  79, 200,  50,  28, 188 ,
    52, 140, 202, 120,  68, 145,  62,  70, 184, 190,  91, 197, 152, 224 ,
    149, 104,  25, 178, 252, 182, 202, 182, 141, 197,   4,  81, 181, 242 ,
    145,  42,  39, 227, 156, 198, 225, 193, 219,  93, 122, 175, 249,   0 ,
    175, 143,  70, 239,  46, 246, 163,  53, 163, 109, 168, 135,   2, 235 ,
    25,  92,  20, 145, 138,  77,  69, 166,  78, 176, 173, 212, 166, 113 ,
    94, 161,  41,  50, 239,  49, 111, 164,  70,  60,   2,  37, 171,  75 ,
    136, 156,  11,  56,  42, 146, 138, 229,  73, 146,  77,  61,  98, 196 ,
    135, 106,  63, 197, 195,  86,  96, 203, 113, 101, 170, 247, 181, 113 ,
    80, 250, 108,   7, 255, 237, 129, 226,  79, 107, 112, 166, 103, 241 ,
    24, 223, 239, 120, 198,  58,  60,  82, 128,   3, 184,  66, 143, 224 ,
    145, 224,  81, 206, 163,  45,  63,  90, 168, 114,  59,  33, 159,  95 ,
    28, 139, 123,  98, 125, 196,  15,  70, 194, 253,  54,  14, 109, 226 ,
    71,  17, 161,  93, 186,  87, 244, 138,  20,  52, 123, 251,  26,  36 ,
    17,  46,  52, 231, 232,  76,  31, 221,  84,  37, 216, 165, 212, 106 ,
    197, 242,  98,  43,  39, 175, 254, 145, 190,  84, 118, 222, 187, 136 ,
    120, 163, 236, 249
    } // Stole random function from https://github.com/id-Software/DOOM/blob/master/linuxdoom-1.10/m_random.c
     for(int n = 0; n < 1024; n++){
        if(msg[n] > 64 && msg[n] < 91){
            
        
        // testing for each letter of the alphabet 
        swtich(msg[n]){
              
                case 0:
                   msg[n] = msg[n] - 97; // translating the ascii table
                   msg[n] = msg[n] + rotation[0]; // moving the letters
                   msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                   msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 1:
                   msg[n] = msg[n] - 97; // translating the ascii table
                   msg[n] = msg[n] + rotation[1]; // moving the letters
                   msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                   msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 2:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[2]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 3:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[3]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 4:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[4]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 5:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[5]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 6:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[6]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 7:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[7]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 8:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[8]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 9:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[9]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 10:
                 msg[n] = msg[n] - 97; // translating the ascii table
                 msg[n] = msg[n] + rotation[10]; // moving the letters
                 msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                 msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 11:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[11]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 12:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[12]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;  
                case 13:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[13]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 14:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[14]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 15:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[15]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 16:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[16]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 17:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[17]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 18:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[18]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 19:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[19]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 20:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[20]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 21:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[21]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 22:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[22]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 23:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[23]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 24:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[24]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
                case 25:
                  msg[n] = msg[n] - 97; // translating the ascii table
                  msg[n] = msg[n] + rotation[25]; // moving the letters
                  msg[n] = msg[n] % 26; // accounting for the overflow i.e. z needs to move to the start of rotation
                  msg[n] = msg[n] + 97; // moving it back into the alaphabet 
                break;
            }
        }


     }
 } 


    