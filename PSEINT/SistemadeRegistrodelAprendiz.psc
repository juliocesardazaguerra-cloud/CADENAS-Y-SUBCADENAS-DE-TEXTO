Proceso SistemadeRegistrodelAprendiz 
	// Declaración de variables
    Definir nombreCompleto, documento, ciudad, programa, ficha, correo Como Texto;
    Definir edad, largoNombre, largoDoc Como Entero;
    Definir primeraLetra, ultimaLetra, tresPrimeras Como Texto;
    Definir dosLetrasNombre, ultimosDigitosDoc, contrasena Como Texto;
    
    // Entrada de datos
    Escribir "Ingrese nombre completo del aprendiz:";
    Leer nombreCompleto;
    Escribir "Ingrese número de documento:";
    Leer documento;
    Escribir "Ingrese edad:";
    Leer edad;
    Escribir "Ingrese ciudad:";
    Leer ciudad;
    Escribir "Ingrese programa de formación:";
    Leer programa;
    Escribir "Ingrese número de ficha:";
    Leer ficha;
    Escribir "Ingrese correo electrónico:";
    Leer correo;
    
    // Procesamiento de datos de texto
    largoNombre <- Longitud(nombreCompleto);
    largoDoc <- Longitud(documento);
    
    primeraLetra <- Subcadena(nombreCompleto, 0, 0);
    ultimaLetra <- Subcadena(nombreCompleto, largoNombre - 1, largoNombre - 1);
    tresPrimeras <- Subcadena(nombreCompleto, 0, 2);
    
    // Lógica para la contraseña temporal
	dosLetrasNombre <- Subcadena(nombreCompleto, 0, 1);
    ultimosDigitosDoc <- Subcadena(documento, largoDoc - 4, largoDoc - 1);
    contrasena <- Concatenar(dosLetrasNombre, ultimosDigitosDoc);

    
    // Salida de datos organizada en una ficha decorada
    Escribir "";
    Escribir "**************************************************";
    Escribir "*          FICHA DE REGISTRO DEL APRENDIZ        *";
    Escribir "**************************************************";
    Escribir "* Nombre:      ", nombreCompleto;
    Escribir "* Documento:   ", documento;
    Escribir "* Edad:        ", edad, " años";
    Escribir "* Ciudad:      ", ciudad;
    Escribir "* Programa:    ", programa;
    Escribir "* Ficha:       ", ficha;
    Escribir "* Correo:      ", correo;
    Escribir "**************************************************";
    Escribir "*               ANÁLISIS DE DATOS                *";
    Escribir "**************************************************";
    Escribir "* Cantidad total de caracteres del nombre: ", largoNombre;
    Escribir "* Primera letra del nombre: ", primeraLetra;
    Escribir "* Última letra del nombre:  ", ultimaLetra;
    Escribir "* Tres primeras letras del nombre: ", tresPrimeras;
    Escribir "* Contraseña temporal generada: ", contrasena;
    Escribir "**************************************************";
FinProceso
