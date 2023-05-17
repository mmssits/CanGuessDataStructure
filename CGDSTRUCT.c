#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int pilha = 1;
        int fila = 1;
        int filapr = 1;

        for (int i = 0; i < n; i++) {
            int op, x;
            scanf("%d", &op);
            if (op == 1) {
                scanf("%d", &x);
            } else {
                scanf("%d", &x);
                if (pilha) {
                    if (x != n - i) pilha = 0;
                }
                if (fila) {
                    if (x != i + 1) fila = 0;
                }
                if (filapr) {
                    if (x != n - i) filapr = 0;
                }
            }
        }
        if (pilha) printf("pilha\n");
        else if (fila) printf("fila\n");
        else if (filapr) printf("fila de prioridade\n");
        else printf("impossivel\n");
    }
    return 0;
}