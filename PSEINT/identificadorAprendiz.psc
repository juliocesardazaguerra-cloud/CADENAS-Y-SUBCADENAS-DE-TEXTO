// Solicite Nombre y Apellido. 
// Construya un identificador uniendo las tres primeras letras del nombre con las tres primeras letras del apellido. 
Proceso identificadorAprendiz
	Definir nombre, apellido Como Caracter;
	Definir identificador1,identificador2 como texto;
	
	Escribir "Ingre su nombre, por favor";
	Leer nombre;
	Escribir "Ingrese su apellido, por favor";
	Leer apellido;
	identificador1 <- Subcadena(nombre,0,2);
	identificador2 <- Subcadena(apellido,0,2);
	
	Escribir "Su identificador";
	Escribir identificador1,identificador2;
FinProceso
