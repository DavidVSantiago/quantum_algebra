/** A matriz adjunta reúne os conceiros de transposição e conjugado.
 * Desta forma, a matriz adjunta B de uma matriz A é uma matriz onde as linhas de B são as colunas de A, respectivamente,
 * e cada valor em B é o conjugado do valor original de A.
*/

#include "00_complex_matrix.h"

int main(){
    /** Entrada. *****************************************************************************/
    int l,c;
    // Obtenção dos dados!
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&l);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&c);

    Complex **matrix = makeMatrixFilled(l,c);

    /** Processamento. *****************************************************************************/
    Complex **adjointMatrix = calculateAdjoint(matrix,l,c);

    /** Saída. *****************************************************************************/
    printf("\n********* Matriz Digitada *********\n\n");
    printMatrix(matrix,l,c);
    printf("\n\n********* Matriz Adjunta *********\n\n");
    printMatrix(adjointMatrix,c,l);
    printf("\n");
}