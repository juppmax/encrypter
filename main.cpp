#include <iostream>

void char_to_int_string(char input, int& char_interger) {
    switch(input){
        //use the normal char and the capital one
        case 'a':
        case 'A':
            char_interger = 100;
            break;
        case 'b':
        case 'B':
            char_interger = 101;
            break;
        case 'c':
        case 'C':
            char_interger = 102;
            break;
        case 'd':
        case 'D':
            char_interger = 103;
            break;
        case 'e':
        case 'E':
            char_interger = 104;
            break;
        case 'f':
        case 'F':
            char_interger = 106;
            break;
        case 'g':
        case 'G':
            char_interger = 107;
            break;
        case 'h':
        case 'H':
            char_interger = 108;
            break;
        case 'i':
        case 'I':
            char_interger = 109;
            break;
        case 'j':
        case 'J':
            char_interger = 110;
            break;
        case 'k':
        case 'K':
            char_interger = 111;
            break;
        case 'l':
        case 'L':
            char_interger = 112;
            break;
        case 'm':
        case 'M':
            char_interger = 113;
            break;
        case 'n':
        case 'N':
            char_interger = 114;
            break;
        case 'o':
        case 'O':
            char_interger = 116;
            break;
        case 'p':
        case 'P':
            char_interger = 117;
            break;
        case 'q':
        case 'Q':
            char_interger = 118;
            break;
        case 'r':
        case 'R':
            char_interger = 119;
            break;
        case 's':
        case 'S':
            char_interger = 120;
            break;
        case 't':
        case 'T':
            char_interger = 121;
            break;
        case 'u':
        case 'U':
            char_interger = 122;
            break;
        case 'v':
        case 'V':
            char_interger = 123;
            break;
        case 'w':
        case 'W':
            char_interger = 124;
            break;
        case 'x':
        case 'X':
            char_interger = 126;
            break;
        case 'y':
        case 'Y':
            char_interger = 127;
            break;
        case 'z':
        case 'Z':
            char_interger = 128;
            break;
        default:
            char_interger = -1;
            std::cout << "only chars!" << std::endl;
    }
}
int main(){
    char input;
    int pass_key;
    int char_interger;
    /*std::cout << "pleas enter a key: ";
    std::cin >> pass_key;
    */
    while(true){
        std::cout << "pleas enter char: ";
        std::cin >> input;
        if(input == '9'){
            exit(0);
        }
        char_to_int_string(input, char_interger);
        std::cout << "your char id is: " << char_interger;
    }
}