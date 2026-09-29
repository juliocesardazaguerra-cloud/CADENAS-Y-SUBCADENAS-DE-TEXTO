Algoritmo actividadIndicesDesdeElFinal
    Definir palabra Como Texto;
    Definir largo Como Entero;
    Definir primera, ultima, penultima Como Texto;
    
    Escribir "Solicite una palabra:";
    Leer palabra;
    
    largo <- Longitud(palabra);
    
    primera <- Subcadena(palabra, 0, 0);
    
    ultima <- Subcadena(palabra, largo - 1, largo - 1);
    
	penultima <- Subcadena(palabra, largo - 2, largo - 2);
    
    Escribir "Primera letra: ", primera;
    Escribir "Última letra: ", ultima;
    Escribir "Segunda letra contada desde el final: ", penultima;
FinAlgoritmo
