Proceso analizandoNombre
   Definir nombreCompleto Como Texto;
   Definir totalLetras Como Entero;
    
   Escribir "Solicite el nombre completo del usuario:";
   Leer nombreCompleto;
    
   totalLetras <- Longitud(nombreCompleto);
    
   Escribir "? Cantidad de letras: ", totalLetras;
    
   // Primera y última letra en Base 0
   Escribir "? Primera letra: ", Subcadena(nombreCompleto, 0, 0);
   Escribir "  Última letra: ", Subcadena(nombreCompleto, totalLetras - 1, totalLetras - 1);
    
   // Tres primeras y tres últimas letras en Base 0
   Escribir "? Tres primeras letras: ", Subcadena(nombreCompleto, 0, 2);
   Escribir "  Tres últimas letras: ", Subcadena(nombreCompleto, totalLetras - 3, totalLetras - 1);
FinProceso
