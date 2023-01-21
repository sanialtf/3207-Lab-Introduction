//
// Created by Sunny on 1/18/2023.
//


//funct randchar() TODO
// returns random char from A - Z
// char is used in main to generate
// random 7 letterword

char randchar(int n){

    char alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
                           'H', 'I', 'J', 'K', 'L', 'M', 'N',
                           'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                           'V', 'W', 'X', 'Y', 'Z' };
    return alphabet[n % 26];;

}



