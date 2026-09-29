Proceso explorandoIndice
	Definir palabra como texto;
	Definir primerCaracter,tercerCaracter,penultimoCaracter,UltimoCaracter Como Caracter;
	
	palabra <- "PROGRAMADOR";
	primerCaracter <- Subcadena(palabra,0,0);
	tercerCaracter <- Subcadena(palabra,2,2);
	penultimoCaracter <- Subcadena(palabra,9,9);
	UltimoCaracter <- Subcadena(palabra,10,10);
	
	Escribir "***********************************";
	Escribir "Palabra: PROGRAMADOR";
	Escribir "Primer Caracter: ",primerCaracter;
	Escribir "Tercer Carácter: ",tercerCaracter;
	Escribir "Penúltimo Carácter: ", penultimoCaracter;
	Escribir "Último Carácter: ",UltimoCaracter;
	
FinProceso
