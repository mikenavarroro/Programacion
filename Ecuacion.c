#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, a, b, c, abc, z;

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
 	
 	abc = (b * b) - (4 * a * c);

 	if(abc > 0){
		x1= (-b + sqrt (abc))/2 * a; 
 		x2= (-b - sqrt ((b * b)-(4 * a * c)))/2 * a;
		printf ("x1 = %.2f \n", x1);
		printf ("x2 = %.2f \n", x2);
	}else if (abc == 0){
		x1= (-b) / 2 * a;
		printf ("La ecuacion solo tiene una solucion y es %.2f\n", x1);
	}else {
		z = 2 * a;
		printf ("x1 = (-%.2f+(sqrt (%.2f)i)) / %.2f\n", b, -abc, z);
		printf ("x1 = (-%.2f-(sqrt (%.2f)i)) / %.2f\n", b, -abc, z);
	}
	return 0;
}