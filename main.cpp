#include <iostream>
#include <vector>

void clear(){
    #ifdef WIN32
    std::system("cls");
    #else
    std::system("clear");
    #endif
}

void char_to_int_string(char input, int& char_integer) {
    switch(input){
        case 'a': case 'A': char_integer = 100; break;
        case 'b': case 'B': char_integer = 101; break;
        case 'c': case 'C': char_integer = 102; break;
        case 'd': case 'D': char_integer = 103; break;
        case 'e': case 'E': char_integer = 104; break;
        case 'f': case 'F': char_integer = 105; break;
        case 'g': case 'G': char_integer = 106; break;
        case 'h': case 'H': char_integer = 107; break;
        case 'i': case 'I': char_integer = 108; break;
        case 'j': case 'J': char_integer = 109; break;
        case 'k': case 'K': char_integer = 110; break;
        case 'l': case 'L': char_integer = 111; break;
        case 'm': case 'M': char_integer = 112; break;
        case 'n': case 'N': char_integer = 113; break;
        case 'o': case 'O': char_integer = 114; break;
        case 'p': case 'P': char_integer = 115; break;
        case 'q': case 'Q': char_integer = 116; break;
        case 'r': case 'R': char_integer = 117; break;
        case 's': case 'S': char_integer = 118; break;
        case 't': case 'T': char_integer = 119; break;
        case 'u': case 'U': char_integer = 120; break;
        case 'v': case 'V': char_integer = 121; break;
        case 'w': case 'W': char_integer = 122; break;
        case 'x': case 'X': char_integer = 123; break;
        case 'y': case 'Y': char_integer = 124; break;
        case 'z': case 'Z': char_integer = 125; break;
        default:
            char_integer = -1;
            std::cout << "Only alphabetic characters are supported!" << std::endl;
    }
}
void encrypt_integer(int& char_integer, int& encrypted_char_integer, int& pass_key){
    encrypted_char_integer = char_integer * pass_key;
}

void draw_menu1(int& position){
    clear();
    std::cout << ("################################################") << std::endl;
    std::cout << ("#                                              #") << std::endl;
    if(position == 0){
    std::cout << ("# [*] encrypt                                  #") << std::endl;
    }else{
    std::cout << ("# [ ] encrypt                                  #") << std::endl;
    }
    if(position == 1){
    std::cout << ("# [*] crypt                                    #") << std::endl;
    }else{
    std::cout << ("# [ ] crypt                                    #") << std::endl;
    }
    std::cout << ("#                                              #") << std::endl;
    std::cout << ("################################################") << std::endl;
}
int main(){
    char input;
    int position = 0;
    int screen = 0;
    int pass_key = 0;
    int char_integer;
    int encrypted_char_integer;
    std::vector<int> integers;
    
    clear();

    std::cout << "use key?: ";
    std::cin >> input;
    if(input == 'y' || input == 'Y'){
        std::cout << "Pleas enter key: ";
        std::cin >> pass_key;
    }
    std::cout << "\n";

    while(true){
        draw_menu1(position);
        std::cin >> input;
        if(input == 's' && position == 0){
            position++;
        }else if(input == 'w' && position == 1){
            position--;
        }else if(input == 'e'){
            if(position == 0){
                while(true){
                    clear();
                    std::cout << "Pleas enter sentence: ";
                    std::cin >> input;
                    char_to_int_string(input,char_integer);
                    std::getline(cin);
                }
            }
        }
        if(input == '9'){
            exit(0);
        }else if(input == '4'){
            for (int num : integers) {
                std::cout << num << " ";
            }
        }
    }
}