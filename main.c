#include <stdio.h>
#include <stdlib.h>
#include "init.h"
#include "hashing.h"
#define MAX_BUF_SIZE 1024

int main() {
    char repo_name[MAX_BUF_SIZE];
    printf("enter repo name: ");
    scanf("%s", repo_name);
    init(repo_name);
		hash_file(repo_name,"chicken.c");
		
		
    return 0;
}

