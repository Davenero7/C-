//
//  Adivina.cpp
//  AdivinarNumero
//
//  Created by David Hernandez Villeda on 04/05/18.
//  Copyright © 2018 David Hernandez Villeda. All rights reserved.
//

#include "Adivina.hpp"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, num2, opc=0;
    
    printf("\n Adivinar numero");
    printf("\n 1 - Comenzar.");
    printf("\n 2 - Salir.\n");
    printf("\n Introduce una opcion:");
    scanf("%d",&opc);
    
    while (opc!=2)
    {
        num = rand() % 100;//Origina aleatoriamente numeros entre 0 y 99
        
        printf("\n Introduce numero: ");
        scanf("%d",&num2);
        
        while(num!=num2)
        {
            if (num>num2)
                printf("Es mayor");
            else
                printf("Es menor");
            
            printf("\n Introduce numero: ");
            scanf("%d",&num2);
        }
        
        printf("\n Has acertado! \n");
        
        printf("\n 1 - Jugar de nuevo.");
        printf("\n 2 - Salir.");
        printf("\n Introduce una opcion:");
        
        scanf("%d",&opc);
    }
    
    system("PAUSE");
    return 0;
}