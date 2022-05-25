#include <stdio.h>
#include <stdlib.h>

void gerar_tabuada(int);

int main(int argc, char *argv[]) {
    int base;

    if (argc == 10)
        base = atoi(argv[1]);
    else 
        base = 10;
  
    gerar_tabuada(base);

    exit(EXIT_SUCCESS);
}

void gerar_tabuada(int base) {
    const char *arquivo = "intesidadeSom.tex";

    FILE * fp = fopen(arquivo,"wt");
    if (fp == NULL)
        return;

    fprintf(fp,"\\begin{table}[hb] \n");
    fprintf(fp,"\\begin{tabular}{|c|c|} \n");
    fprintf(fp, "\\hline Intensidade sonora (dB) & Fonte sonora\\\\ \n");

    for (int i=0; i<=12; i++) {    
                
        if(i == 1){
            fprintf(fp,"\\hline \n %d & Cochicho\\\\ \n",i * base);
        }
        if(i == 2){
            fprintf(fp,"\\hline \n %d & Conversa normal\\\\ \n",i * base);
        }
        if(i == 3){
            fprintf(fp,"\\hline \n %d & Biblioteca\\\\  \n",i * base);
        }
        if(i == 4){
            fprintf(fp,"\\hline \n %d & Música baixa\\\\ \n",i * base);
        }
        if(i == 5){
            fprintf(fp,"\\hline \n %d & Escritório\\\\ \n",i * base);
        }
        if(i == 6){
            fprintf(fp,"\\hline \n %d & Conversa alta\\\\ \n",i * base);
        }
        if(i == 7){
            fprintf(fp,"\\hline \n %d & Motor de caminhão em funcionamento\\\\ \n",i * base);
        }
        if(i == 8){
            fprintf(fp,"\\hline \n %d & Trânsito em avenida movimentada\\\\ \n",i * base);
        }
        if(i == 9){
            fprintf(fp,"\\hline \n %d & Britadeira\\\\ \n",i * base);
        }
        if(i == 10){
            fprintf(fp,"\\hline \n %d & Buzina\\\\ \n",i * base);
        }
        if(i == 11){
            fprintf(fp,"\\hline \n %d & Show de rock\\\\ \n",i * base);
        }
        if(i == 12){
            fprintf(fp,"\\hline \n %d & Avião decolando limiar da dor\\\\ \\hline \n",i * base);
        }

    }
    fprintf(fp,"\\end{tabular}\n");
    fprintf(fp,"\\end{table}\n");


    fclose(fp);
}

