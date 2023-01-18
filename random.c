//
// Created by Sunny on 1/18/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//funct randchar() TODO
// returns random char from A - Z
// char is used in main to generate
// random 7 letterword

char randchar(){
    srand(time(NULL));
    (rand()%(90-65))+65;

}



