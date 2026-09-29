Proceso contrasenaTemporal
	Definir nombre,contrasena Como Caracter;
	definir anoNacimiento Como Real;
	
	Escribir "Ingrese su nombre, por favor";
	Leer nombre;
	Escribir "Ingrese su año de nacimiento, por favor";
	Leer anoNacimiento;
	
	contrasena <- Subcadena(nombre,0,1);
	
	Escribir "Su Contrase temporal es: ",contrasena,anoNacimiento;
	
FinProceso
