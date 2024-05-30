#include <stdio.h>
#include <string.h>
#include "./headers/manga.h"

struct Manga {
    char ISBN[14];
    char titulo[200];
    int ano_inicio;
    int ano_fim;
    char genero[20];
    char revista[30];
    char editora[30];
    int ano_da_edicao;
    int volumes_existentes;
    int quantidade_de_volumes_obtidos;
    int volumes_obtidos;
};

