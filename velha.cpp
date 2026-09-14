/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{
    int count_vazio = 0;
    int count_x = 0;
    int count_o = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (velha[i][j] == 0) count_vazio++;
            else if (velha[i][j] == 1) count_x++;
            else if (velha[i][j] == 2) count_o++;
            else return -2; 
        }
    }

	
    if (count_vazio == 9) return -1;
    if (count_x > 5 || count_o > 5) return -2;
	
	// vitória por linha
	for (int i = 0; i < 3; i++) {
        if (velha[i][0] == 1 && velha[i][1] == 1 && velha[i][2] == 1) {
            return 1; // X venceu
        }
        if (velha[i][0] == 2 && velha[i][1] == 2 && velha[i][2] == 2) {
            return 2; // O venceu
        }
    }

	// vitória por coluna
	for (int j = 0; j < 3; j++) {
        if (velha[0][j] == 1 && velha[1][j] == 1 && velha[2][j] == 1) return 1;
        if (velha[0][j] == 2 && velha[1][j] == 2 && velha[2][j] == 2) return 2;
    }

	// jogo ainda em andamento/indefinido
    return -1; 
}



