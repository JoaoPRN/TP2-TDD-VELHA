
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_NO_POSIX_SIGNALS
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );

}

TEST_CASE("Tabuleiro vazio", "[velha]") {
    int jogo[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    REQUIRE(VerificaVelha(jogo) == -1);
}

TEST_CASE("Mais de 5 X", "[velha]") {
    int jogo[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {0, 0, 0}
    };

    REQUIRE(VerificaVelha(jogo) == -2);
}

TEST_CASE("Mais de 5 O", "[velha]") {
    int jogo[3][3] = {
        {2, 2, 2},
        {2, 2, 2},
        {0, 0, 0}
    };

    REQUIRE(VerificaVelha(jogo) == -2);
}

TEST_CASE("Tabuleiro valido com jogo indefinido", "[velha]") {
    int jogo[3][3] = {
        {1, 2, 0},
        {0, 1, 0},
        {0, 0, 2}
    };

    REQUIRE(VerificaVelha(jogo) == -1);
}
 
