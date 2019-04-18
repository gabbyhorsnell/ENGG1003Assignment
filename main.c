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
    int x=2;
 
    do{
        switch(x){
            case 1:
             caesarCipherEncrypt();  // function for running the caesar cipher encription 
            break;
            case 2:
              caesarCipherDecrypt(); // function for running the caesar cipher decription  
            break;
            case 3:
             enigmaCipherEncrypt();//enigmaCipherEncrypt(); //function for running the enigma cipher encription
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
            
        }
        
        swtich(msg[n]){
              
                case A:
                    msg[i] = msg[i] + rotation[0];
                break;
                case B:
                break;
                case C:
                break;
                case D:
                break;
                case E:
                break;
                case F:
                break;
                case G:
                break;
                case H:
                break;
                case I:
                break;
                case J:
                break;
                case K:
                break;
                case L:
                break;
                case M:
                break;  
                case N:
                break;
                case O:
                break;
                case P:
                break;
                case Q:
                break;
                case R:
                break;
                case S:
                break;
                case T:
                break;
                case U:
                break;
                case V:
                break;
                case W:
                break;
                case X:
                break;
                case Y:
                break;
                case Z:
                break;
            }

     }
 } 


    