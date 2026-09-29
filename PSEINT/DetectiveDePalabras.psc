Proceso DetectiveDePalabras
	
	Definir palabra Como Cadena;
	Definir tamano Como Entero;
	
	Escribir "Por favor, ingresa una palabra:";
	Leer palabra;
	
	tamano <- Longitud(palabra);
	
	Escribir "Cantidad de caracteres: ", tamano;
	Escribir "Primera letra (posición 1): ", Subcadena(palabra, 0, 0);
	Escribir "Última letra (posición ", tamano, "): ", Subcadena(palabra, tamano - 1, tamano - 1);
FinProceso
