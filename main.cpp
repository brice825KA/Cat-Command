// Main of project Cat

#include "include/headerCat.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Check This program with this command: ./my_cat --help\n");
        return 84;
    }
    else if (argc == 2 && strcmp(argv[1], "--help") == 0) {
        help();
        return 0;
    }
    for (auto i = 1; argv[i]; i += 1)
        my_cat(argv[i]);
    return 0;
}