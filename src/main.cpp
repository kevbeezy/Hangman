#include <iostream>

void draw(int val){
    switch (val){
    case 1:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|          \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    case 2:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|     |    \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    case 3:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|    \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    case 4:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|\\  \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    case 5:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|\\  \n";
    std::cout << "|    /      " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    case 6:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|    ( )   \n";
    std::cout << "|    /|\\  \n";
    std::cout << "|    / \\   " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    default:
    std::cout << "_______\n";
    std::cout << "|     |\n";
    std::cout << "|          \n";
    std::cout << "|          \n";
    std::cout << "|           " <<'\n';
    std::cout << "|           " <<'\n';
    std::cout << "|         \n";
    std::cout << "|         \n";
    std::cout << "|_____\n";
    break;
    }
}

int main(){
    int x;
    draw(x);
    do{
    printf("Enter a number: ");
    std::cin >> x;
    draw(x);
    }while(x < 6);
    return 0;
}
