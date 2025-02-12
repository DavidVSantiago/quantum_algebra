/** Uma matriz conjugada B de uma matriz A é uma matriz onde cada elemento de B é o conjugado do respectivo elemento de A
 * O conjugado de um numero complexo é formado pela negação da parte imaginária desse número.
 * Ex.: O conjugado de a+bi = a-bi.
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
    Complex **conjugateMatrix = calculateConjugate(matrix,l,c);

    /** Saída. *****************************************************************************/
    printf("\n********* Matriz Digitada *********\n\n");
    printMatrix(matrix,l,c);
    printf("\n\n********* Matriz Conjugada *********\n\n");
    printMatrix(conjugateMatrix,l,c);
    printf("\n");

    return 0;
}
    