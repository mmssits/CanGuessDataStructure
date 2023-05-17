//APS de Proposta: I Can Guess The Data Structure

#include <stdio.h> 

int main() 
{ 
    int n; 
    while (scanf("%d", &n) != EOF) { 
        int x, flag[3] = {1, 1, 1}; 
        int i; 
        for (i = 0; i < n; i++) { 
            scanf("%d", &x); 
            if (x == 1) { 
                flag[0] = 0; 
            } 
            else { 
                int y; 
                scanf("%d", &y); 
                if (y > x) { 
                    flag[1] = 0; 
                } 
                else { 
                    flag[2] = 0; 
                } 
            } 
        } 
        if (flag[0] == 1) { 
            printf("pilha"); 
        } 
        else if (flag[1] == 1) { 
            printf("fila"); 
        } 
        else if (flag[2] == 1) { 
            printf("fila de prioridade"); 
        } 
        else { 
            int sum = 0; 
            for (i = 0; i < 3; i++) { 
                sum += flag[i]; 
            } 
            if (sum == 0) { 
                printf("impossível"); 
            } 
            else { 
                printf("não tenho certeza"); 
            } 
        } 
    } 
    return 0; 
}