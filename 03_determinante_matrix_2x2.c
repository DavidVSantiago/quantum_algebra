/** O determinante é um valor escalar calculado a partir de uma matriz quadrada.
 * Formalmente representada por det(A) ou |A|. O Cálculo varia conforme a ordem da matriz.
 */

#include "00_complex_matrix.h"

int main(){

    /** Entrada. *****************************************************************************/

    // Obtenção dos dados!
    printf("Digite os valores da matrix 2x2\n");
    Complex** matrix = makeMatrixFilled(2,2);

    /** Processamento. *****************************************************************************/
    Complex determinante = calculateDeterminant_2x2(matrix);

    /** Saída. *****************************************************************************/
    printf("\n********* Matriz Digitada *********\n\n");
    printMatrix(matrix,2,2);
    printf("\nSua determinante = ");
    printComplex(determinante);
    printf("\n");
    return 0;
}