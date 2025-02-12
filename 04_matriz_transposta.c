/** A matriz Transposta (A^t) de uma matriz A é uma matriz onde as linhas de A^t são as colunas de A
 * e as colunas de A^t são as linhas de A
 */

#include "00_complex_matrix.h"

int main(){
    
    Complex escalar;
    int l,c;

    /** Entrada. *****************************************************************************/
    // Obtenção dos dados!
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d",&l);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d",&c);

    Complex **matrix = makeMatrixFilled(l,c);

    /** Processamento. *****************************************************************************/
    Complex **tranposeMatrix = calculateTranspose(matrix,l,c);

    /** Saída. *****************************************************************************/
    printf("\n********* Matriz Digitada *********\n\n");
    printMatrix(matrix,l,c);
    printf("\n\n********* Matriz Transposta *********\n\n");
    printMatrix(tranposeMatrix,c,l);
    printf("\n");
}
