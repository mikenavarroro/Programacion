#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, a, b, c, discriminante;

	printf ("Este programa resuelve ecuaciones de segundo grado\n");
	printf ("a = ");
	scanf ("%f", &a);
	while (a == 0){
		printf ("El valor de a no puede ser cero\n");
		printf ("Ingrese de nuevo el valor \n");
		printf ("a = ");
		scanf ("%f", &a);
	}
	printf ("b = ");
	scanf ("%f", &b);
	printf ("c = ");
	scanf ("%f", &c);
 	
 	discriminante = (b * b) - (4 * a * c);

 	if(discriminante > 0){
		x1= (-b + sqrt (discriminante))/(2 * a); 
 		x2= (-b - sqrt (discriminante))/(2 * a);
		printf ("x1 = %.2f \n", x1);
		printf ("x2 = %.2f \n", x2);
	}else if (discriminante == 0){
		x1= (-b) / (2 * a);
		printf ("La ecuacion solo tiene una solucion y es %.2f\n", x1);
	}else {
		printf ("x1 = (-%.2f+(sqrt (%.2f)i)) / %.2f\n", b, -discriminante, 2*a);
		printf ("x2 = (-%.2f-(sqrt (%.2f)i)) / %.2f\n", b, -discriminante, 2*a);
	}
	return 0;
}
