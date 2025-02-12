/** A matriz unitaria é aqula matriz cuja inversa é igual a adjunta
 * Desta forma, para saber se uma matriz é unitária, precisamos apenas multiplicá-la pela adjunta
 * e verificar se o resultado é uma matriz identidade
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

    Complex **matrix = makeMatrixFilled(l,c); // aloca a matriz e solicita os dados do usuário

    /** Processamento. *****************************************************************************/
    Complex **adjointMatrix = calculateAdjoint(matrix,l,c); // calculo da adjunta

    // verifica se a matriz original é unitária
    
    Complex **identityMatrix = multiplyMatrices(matrix,l,c,adjointMatrix,c,l); // 1º multiplicando pela sua adjunta
    
    int isIdentity = checkIdentity(identityMatrix,l,l); // 2º verificando se a matriz é unitária (se o produto é identidade)
    

    /** Saída. *****************************************************************************/
    printf("\n********* Matriz Digitada *********\n\n");
    printMatrix(matrix,l,c);
    printf("\n\n********* Matriz Adjunta *********\n\n");
    printMatrix(adjointMatrix,c,l);
    printf("\n\n********* Matriz multiplicada pela adjunta *********\n\n");
    printMatrix(identityMatrix,l,l);
    printf("\n\n");
    if(isIdentity) printf("A matriz e unitaria");
    else printf("A matriz NAO e unitaria");
    printf("\n\n");
}