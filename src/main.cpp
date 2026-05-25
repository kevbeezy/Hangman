#include <iostream>
#include <cstring>

void output(int size, const char* word, bool* guess_char){

    for(int y = 0; y < size; y++){
        const char character = word[y];

        if (guess_char[character - 'a'])
            std::cout << character;
        else
            std::cout << "_";
    }
    printf("\n");
}

void hangman_output1(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|          \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void hangman_output2(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|     |    \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void hangman_output3(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|    \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void hangman_output4(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|\\  \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void hangman_output5(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|\\  \n";
    std::cout << "|    /      " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void hangman_output6(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|\\  \n";
    std::cout << "|    / \\   " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void hangman_reset(){
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|          \n";
    std::cout << "|          \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
}
void clear(){
    for(int x = 0; x < 50; x++){
        printf(" \n");
    }
}
void hangman_check(int x){
    switch(x){
        case 1: hangman_output1(); break;
        case 2: hangman_output2(); break;
        case 3: hangman_output3(); break;
        case 4: hangman_output4(); break;
        case 5: hangman_output5(); break;
        case 6: hangman_output6(); break;
    }
}

int main(){
    int MaxWordSize;
    int wrong_score = 0;
    int correct_score = 0;
    int NumAttempts = 0;
    int v = 0;
//    printf("How many characters?\n");
//    std::cin >> MaxWordSize;
    char StringArray[1024] = {};
    printf("Enter World\n");
    std::cin >> StringArray;
    MaxWordSize = strlen((const char*)StringArray);
    bool guess_char['z' - 'a' + 1] = {};
//    printf("Enter Each Character\n");
//    for(int i = 0; i < MaxWordSize; i++){
//        char x;
//        std::cin >> x;
//        StringArray[i] = x;
//    }
    clear();
    hangman_reset();

    printf("Guess a character:\n");
//    for(int y = 0; y < MaxWordSize; y++){
//        const char character = StringArray[y];
//
//        if (guess_char[character - 'a'])
//            std::cout << character;
//        else
//            std::cout << "_";
//    }
    output(MaxWordSize, StringArray, guess_char);
    printf(" \n");
    char guess;
    while(NumAttempts < 6){
        std::cin >> guess;
        bool alreadyguessed = guess_char[guess - 'a'];
        guess_char[guess - 'a'] = true;
        if(alreadyguessed){
            printf("You already guessed this\n");
            continue;
        }
        for(int d = 0; d < MaxWordSize; d++){
            if(StringArray[d] == guess){
                printf("Correct\n");
                wrong_score = 0;
                correct_score++;
                output(MaxWordSize, StringArray, guess_char);
            }
            else{
                wrong_score++;
            }
        }
        if(wrong_score >= MaxWordSize){
            clear();
            printf("Wrong\n");
            v++;
            hangman_check(v);
            NumAttempts++;
            output(MaxWordSize, StringArray, guess_char);
        }
        else if(correct_score >= MaxWordSize){
            printf("You Win\n");
            break;
        }
    }
}
