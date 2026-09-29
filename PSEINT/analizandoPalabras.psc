Proceso analizandoPalabras
	Definir palabra, primeraMitad Como Texto;
    Definir largo, puntoMedio Como Entero;
    
    Escribir "Solicite cualquier palabra:";
    Leer palabra;
    
    largo <- Longitud(palabra);
    puntoMedio <- largo / 2; // PSeInt truncará automáticamente a entero
    
    // En Base 0: de la posición 0 hasta (puntoMedio - 1)
    primeraMitad <- Subcadena(palabra, 0, puntoMedio - 1);
    
    Escribir "La primera mitad de la palabra es: ", primeraMitad;
FinProceso
