Proceso palabraInvertida
	Definir palabra, letra0, letra1, letra2, letra3 Como Texto;
    
    Escribir "Ingrese una palabra de exactamente 4 letras:";
    Leer palabra;
    
    // Extraemos cada letra de forma individual
    letra0 <- Subcadena(palabra, 0, 0);
    letra1 <- Subcadena(palabra, 1, 1);
    letra2 <- Subcadena(palabra, 2, 2);
    letra3 <- Subcadena(palabra, 3, 3);
    
    // Las mostramos en orden inverso
    Escribir "Palabra invertida: ", letra3, letra2, letra1, letra0;
	
FinProceso
