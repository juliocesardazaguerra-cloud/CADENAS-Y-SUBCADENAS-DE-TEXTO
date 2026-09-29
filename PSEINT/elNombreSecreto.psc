Proceso elNombreSecreto
	Definir nombre Como Texto;
	Definir usuario Como Texto;
	
	Escribir "Ingrese su nombre";
	Leer nombre;
	
	usuario <- Subcadena(nombre,0,2);
	Escribir usuario,"_ADSO";
FinProceso
