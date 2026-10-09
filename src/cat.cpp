// File for program Cat

#include "../include/headerCat.hpp"

void print_ligne(char *ligne) {
    printf("%s", ligne);
}

void my_cat(char *filepath) {
    FILE *stream = fopen(filepath, "r");
    char *buffer = NULL;
    size_t len = 0;
    auto i = 0;

    if (!stream) {
        printf("cat: %s: No such file or directory\n", filepath);
        exit(84);
    }
    getline(&buffer, &len, stream);
    while (getline(&buffer, &len, stream) != -1)
        print_ligne(buffer);
    fclose(stream);
}