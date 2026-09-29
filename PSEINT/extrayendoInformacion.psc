Proceso extrayendoInformacion
	Definir palabra, resultado Como Texto;
    
    palabra <- "DESARROLLADOR";
    
    // Subcadena(texto, posicion_inicial, posicion_final)
    // De la posición 5 a la 8 están las letras R, O, L, L
    resultado <- Subcadena(palabra, 5, 8);
    
    Escribir "Subcadena extraída: ", resultado;
	
FinProceso
