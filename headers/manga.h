#ifndef MANGA_H
#define MANGA_H

#define ISBN_LENGTH 14
#define TITULO_LENGTH 200
#define GENERO_LENGTH 20
#define REVISTA_LENGTH 30
#define EDITORA_LENGTH 30

typedef struct {
    char ISBN[ISBN_LENGTH];
    char titulo[TITULO_LENGTH];
    int ano_inicio;
    int ano_fim;
    char genero[GENERO_LENGTH];
    char revista[REVISTA_LENGTH];
    char editora[EDITORA_LENGTH];
    char ano_da_edicao;
    int volumes_existentes;
    int quantidade_de_volumes_obtidos;
    int volumes_obtidos;
} Manga;

#endif /* MANGA_H */