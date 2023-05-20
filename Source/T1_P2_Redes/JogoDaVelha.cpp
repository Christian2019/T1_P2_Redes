// Fill out your copyright notice in the Description page of Project Settings.


#include "JogoDaVelha.h"
#include <stdio.h>
#include <iostream>
#include <ctime>


void drawBoard(char* spaces) {
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "   " << "\n";
    std::cout << "_____|_____|_____" << "\n";

    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "   " << "\n";
    std::cout << "_____|_____|_____" << "\n";

    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "   " << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "\n";
}

void playerMove(char* spaces, char player) {
    int number;
    while (true) {
        std::cout << "Diga uma posicao de 1-9 ";
        std::cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    }
}

void computerMove(char* spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner2(int a, int b, int c, char* spaces, char player, char computer) {
    if (spaces[a] != ' ' && spaces[a] == spaces[b] && spaces[b] == spaces[c]) {
        if (spaces[a] == player) {
            std::cout << "Voce venceu!" << "\n";
        }
        else {
            std::cout << "Voce perdeu!" << "\n";
        }
        return true;
    }

    return 0;
}

bool checkWinner(char* spaces, char player, char computer) {
    if (checkWinner2(0, 1, 2, spaces, player, computer) ||
        checkWinner2(3, 4, 5, spaces, player, computer) ||
        checkWinner2(6, 7, 8, spaces, player, computer) ||
        checkWinner2(0, 3, 6, spaces, player, computer) ||
        checkWinner2(1, 4, 7, spaces, player, computer) ||
        checkWinner2(2, 5, 8, spaces, player, computer) ||
        checkWinner2(0, 4, 8, spaces, player, computer) ||
        checkWinner2(6, 4, 2, spaces, player, computer)
        ) {
        return true;
    }

    return 0;
}




bool checkTie(char* spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    std::cout << "Empatou!" << "\n";
    return true;
}

int main()
{
    std::cout << "Hello script " << "\n";
    /*

    char spaces[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while (running) {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            running = false;
            break;
        }
    }
    */
    return 0;
}