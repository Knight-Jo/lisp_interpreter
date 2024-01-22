#include <iostream>
#include <cstdio>
#include <string>
#include <readline/readline.h>
#include <readline/history.h>

#include "mpc.h"

int main(int argc, char* argv[]) 
{
    std::cout << "Lispy Bersion 0.0.0.1\n";
    std::cout << "Press Ctrl+c to Exit\n";

    while(1) {
        char* input = readline("lisp> ");
        add_history(input);

        std::cout<< "No you're a " << input<<std::endl;
        free(input);
    }

    return 0;
}