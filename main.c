#include <stdio.h>
#include <stdlib.h>
#include "init.h"

#define MAX_BUF_SIZE 1024

int main() {
    char repo_name[MAX_BUF_SIZE];
    printf("enter repo name: ");
    scanf("%s", repo_name);
    init(repo_name);
    return 0;
}
