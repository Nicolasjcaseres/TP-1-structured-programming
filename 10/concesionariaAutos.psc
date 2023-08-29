Algoritmo concesionariaAutos
	Escribir "Ingrese el valor del vehiculo:"
	Leer valorVehiculo
	Escribir "Ingrese la cantidad vendida:"
	Leer cantidadVendida
	sueldoBase <- 500.0
	plusVehiculo <- valorVehiculo * 0.1
	plusConstante <- cantidadVendida * 50.0
	sueldoTotal <- sueldoBase + plusVehiculo + plusConstante
	Escribir "El sueldo del vendedor es:", sueldoTotal
FinAlgoritmo
