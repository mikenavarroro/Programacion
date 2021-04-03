#include <stdio.h>
#include <stdlib.h>

#ifdef __linux__
    #define limpiar system("clear")
#elif _WIN32
    #define limpiar system("cls")
    #include <conio.h>
#elif __APPLE__
    #define limpiar system("clear")
#endif

void longitud (void);
void masa (void);
void temperatura (void);
void presion (void);

void main (void){
    int a;

    do{
        printf ("1. Longitud \n");
        printf ("2. Peso y Masa \n");
        printf ("3. Temperatura \n");
        printf ("4. Presi%cn \n", 162);
        printf ("5. Salir \n");
        scanf ("%d", &a);
        switch (a){
            case 1: longitud ();
                break;
            case 2: masa ();
                break;
            case 3: temperatura ();
                break;
            case 4: presion ();
                break;
            case 5: printf ("Salir \n");
                break;
            default: printf ("Opci%cn no permitida \n", 162);
                break;
        }
        printf ("Oprime cualquier n%cmero \n", 163);
        int esperar;
        scanf("%d", &esperar);
        limpiar;
    }while(a != 5);
}

void longitud (void){
    int b;

    printf ("1. cm - m  ");
    printf ("    22. in - ft \n");
    printf ("2. cm - km  ");
    printf ("   23. in - yd \n");
    printf ("3. cm - in  ");
    printf ("   24. in - mi \n");
    printf ("4. cm - ft  ");
    printf ("   25. ft - cm \n");
    printf ("5. cm - yd  ");
    printf ("   26. ft - m \n");
    printf ("6. cm - mi  ");
    printf ("   27. ft - km \n");
    printf ("7. m - cm  ");
    printf ("    28. ft - in \n");
    printf ("8. m - km  ");
    printf ("    29. ft - yd \n");
    printf ("9. m - in  ");
    printf ("    30. ft - mi \n");
    printf ("10. m - ft  ");
    printf ("   31. yd - cm \n");
    printf ("11. m - yd  ");
    printf ("   32. yd - m \n");
    printf ("12. m- mi  ");
    printf ("    33. yd - km \n");
    printf ("13. km - cm  ");
    printf ("  34. yd - in \n");
    printf ("14. km - m  ");
    printf ("   35. yd - ft \n");
    printf ("15. km - in  ");
    printf ("  36. yd - mi \n");
    printf ("16. km - ft  ");
    printf ("  37. mi - cm \n");
    printf ("17. km- yd  ");
    printf ("   38. mi - m \n");
    printf ("18. km - mi  ");
    printf ("  39. mi - km \n");
    printf ("19. in - cm  ");
    printf ("  40. mi - in \n");
    printf ("20. in - m  ");
    printf ("   41. mi - ft \n");
    printf ("21. in - km  ");
    printf ("  42. mi - yd \n");
    scanf ("%d", &b);
    switch (b){
        case 1:{
            printf ("cm - m \n");
            float c;
            printf ("Escribe la cantidad en cent%cmetros \n", 161);
            scanf ("%f", &c);
            printf ("La equivalencia en metros es: %2.2f m \n", c * 0.01);
            break;
        }
        case 2:{
            printf ("cm - km \n");
            float e;
            printf ("Escribe la  cantidad en cent%cmetros \n", 161);
            scanf ("%f", &e);
            printf ("La equivalencia en kil%cmetros es: %2.5f km \n", 162, e * 0.00001);
            break;
        }
        case 3:{
            printf ("cm - in \n");
            float g;
            printf ("Escribe la cantidad en cent%cmetros \n", 161);
            scanf ("%f", &g);
            printf ("La equivalencia en pulgadas es: %2.3f in \n", g * 0.39);
            break;
        }
        case 4:{
            printf ("cm - ft \n");
            float a;
            printf ("Escribe la cantidad en cent%cmetros \n", 161);
            scanf ("%f", &a);
            printf ("La equivalencia en pies es: %2.3f ft \n", a* 0.03);
            break;
        }
        case 5:{
            printf ("cm - yd \n");
            float a;
            printf ("Escribe la cantidad en cent%cmetros \n", 161);
            scanf ("%f", &a);
            printf ("La equivalencia en yardas es: %2.2f yd \n", a * 0.01);
            break;
        }
        case 6:{
            printf ("cm - mi \n");
            float a;
            printf ("Escribe la cantidad en cent%cmetros \n", 161);
            scanf ("%f", &a);
            printf ("La equivalencia en millas es: %2.6f mi \n", a * 0.000006);
            break;
        }
        case 7:{
            printf ("m - cm \n");
            float a;
            printf ("Escribe la cantidad en metros \n");
            scanf ("%f", &a);
            printf ("La equivalencia en cent%cmetros es: %2.2f \n", 161, a * 100);
            break;
        }
        case 8:{
            printf ("m - km \n");
            float a;
            printf ("Escibe la cantidad en metros \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kil%cmetros es: %2.3f km \n", 162, a * 0.001);
            break;
        }
        case 9:{
            printf ("m - in \n");
            float a;
            printf ("Escribe la cantidad en metros \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pulgadas es: %2.2f in \n", a * 39.37);
            break;
        }
        case 10:{
            printf ("m - ft \n");
            float a;
            printf ("Escribe la cantidad en metros \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pies es: %2.2f ft \n", a * 3.28);
            break;
        }
        case 11:{
            printf ("m - yd \n");
            float a;
            printf ("Escribe la cantidad en metros \n");
            scanf ("%f", &a);
            printf ("La equivalencia en yardas es: %2.2f yd \n", a * 1.09);
            break;
        }
        case 12:{
            printf ("m- mi \n");
            float a;
            printf ("Escribe la cantidad en metros \n");
            scanf ("%f", &a);
            printf ("La equivalencia en millas es: %2.5f mi \n", a * 0.00062);
            break;
        }
        case 13:{
            printf ("km - cm \n");
            float a;
            printf ("Escribe la cantidad en kil%cmetros \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en cent%cmetros es: %2.2f cm \n", 161, a * 100000);
            break;
        }
        case 14:{
            printf ("km - m \n");
            float a;
            printf ("Escribe la cantidad en kil%cmetros \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en metros es: %2.2f m \n", a * 1000);
            break;
        }
        case 15:{
            printf ("km - in \n");
            float a;
            printf ("Escribe la cantidad en kil%cmetros \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en pulgadas es: %2.2f in \n", a * 39379.08);
            break;
        }
        case 16:{
            printf ("km - ft \n");
            float a;
            printf ("Escribe la cantidad en kil%cmetros \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en pies es: %2.2f ft \n", a * 3280.84);
            break;
        }
        case 17:{
            printf ("km- yd \n");
            float a;
            printf ("Escribe la cantidad en kil%cmetros \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en yardas es: %2.2f yd \n", a * 1093.61);
            break;
        }
        case 18:{
            printf ("km - mi \n");
            float a;
            printf ("Escribe la cantidad en kil%cmetros \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en millas es: %2.2f mi \n", a * 0.62);
            break;
        }
        case 19:{
            printf ("in - cm \n");
            float a;
            printf ("Escribe la cantidad en pulgadas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en cent%cmetros es: %2.2f cm \n", 161, a * 2.54);
            break;
        }
        case 20:{
            printf ("in - m \n");
            float a;
            printf ("Escribe la cantidad en pulgadas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en metros es: %2.2f m \n", a * 0.02);
            break;
        }
        case 21:{
            printf ("in - km \n");
            float a;
            printf ("Escribe la cantidad en pulgadas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kil%cmetros es: %2.5f km \n", 162, a * 0.00002);
            break;
        }
        case 22:{
            printf ("in - ft \n");
            float a;
            printf ("Escribe la cantidad en pulgadas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pies es: %2.2f ft \n", a * 0.08);
            break;
        }
        case 23:{
            printf ("in - yd \n");
            float a;
            printf ("Escribe la cantidad en pulgadas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en yardas es: %2.3f yd \n", a * 0.027);
            break;
        }
        case 24:{
            printf ("in - mi \n");
            float a;
            printf ("Escribe la cantidad en pulgadas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en millas es: %2.6f mi \n", a * 0.000016);
            break;
        }
        case 25:{
            printf ("ft - cm \n");
            float a;
            printf ("Escribe la cantidad en pies \n");
            scanf ("%f", &a);
            printf ("La equivalencia en cent%cmetros es: %2.2f cm \n", 161, a * 30.48);
            break;
        }
        case 26:{
            printf ("ft - m \n");
            float a;
            printf ("Escribe la cantidad en pies \n");
            scanf ("%f", &a);
            printf ("La equivalencia en metros es: %2.2f m \n", a * 0.3);
            break;
        }
        case 27:{
            printf ("ft - km \n");
            float a;
            printf ("Escribe la cantidad en pies \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kil%cmetros es: %2.4f km \n", 162, a * 0.003);
            break;
        }
        case 28:{
            printf ("ft - in \n");
            float a;
            printf ("Escribe la cantidad en pies \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pulgadas es: %2.2f in \n", a * 12);
            break;
        }
        case 29:{
            printf ("ft - yd \n");
            float a;
            printf ("Escribe la cantidad en pies \n");
            scanf ("%f", &a);
            printf ("La equivalencia en yardas es: %2.2f yd \n", a * 0.33);
            break;
        }
        case 30:{
            printf ("ft - mi \n");
            float a;
            printf ("Escribe la cantidad en pies \n");
            scanf ("%f", &a);
            printf ("La equivalencia en millas es: %2.5f mi \n", a * 0.00018);
            break;
        }
        case 31:{
            printf ("yd - cm \n");
            float a;
            printf ("Escribe la cantidad en yardas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en cent%cmetros es: %2.2f cm \n", 161, a * 91.44);
            break;
        }
        case 32:{
            printf ("yd - m \n");
            float a;
            printf ("Escribe la cantidad en yardas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en metros es: %2.2f m \n", a * 0.91);
            break;
        }
        case 33:{
            printf ("yd - km \n");
            float a;
            printf ("Escribe la cantidad en yardas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kil%cmetros es: %2.5f km \n", 162, 0.00091);
            break;
        }
        case 34:{
            printf ("yd - in \n");
            float a;
            printf ("Escribe la cantidad en yardas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pulgadas es: %2.2f in \n", a * 36);
            break;
        }
        case 35:{
            printf ("yd - ft \n");
            float a;
            printf ("Escribe la cantidad en yardas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pies es: %2.2f ft \n", a * 3);
            break;
        }
        case 36:{
            printf ("yd - mi \n");
            float a;
            printf ("Escribe la cantidad en yardas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en millas es: %2.5f mi \n", a * 0.00056);
            break;
        }
        case 37:{
            printf ("mi - cm \n");
            float a;
            printf ("Escribe la cantidad en millas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en cent%cmetros es: %2.2f cm \n", 161, a * 160934.4);
            break;
        }
        case 38:{
            printf ("mi - m \n");
            float a;
            printf ("Escribe la cantidad en millas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en metros es: %2.2f m \n", a * 1609.34);
            break;
        }
        case 39:{
            printf ("mi - km \n");
            float a;
            printf ("Escribe la cantidad en millas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kil%cmetros es: %2.3f km \n", 162, a * 1.609);
            break;
        }
        case 40:{
            printf ("mi - in \n");
            float a;
            printf ("Escribe la cantidad en millas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pulgadas es: %2.2f in \n", a * 63360);
            break;
        }
        case 41:{
            printf ("mi - ft \n");
            float a;
            printf ("Escribe la cantidad en millas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pies es: %2.2f ft \n", a * 5280);
            break;
        }
        case 42:{
            printf ("mi - yd \n");
            float a;
            printf ("Escribe la cantidad en millas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en yardas es: %2.2f yd \n", a * 1760);
            break;
        }
        default:printf ("Opci%cn no permitida. Introduce n%cmeros del 1 al 42.\nIntenta de nuevo \n", 162, 163);
    }
}
void masa (void){
    int c;

    printf ("1. mg - g ");
    printf ("     16. oz - mg \n");
    printf ("2. mg - kg ");
    printf ("    17. oz - g \n");
    printf ("3. mg - oz ");
    printf ("    18. oz - kg \n");
    printf ("4. mg - lb ");
    printf ("    19. oz - lb \n");
    printf ("5. mg - ton ");
    printf ("   20. oz - ton \n");
    printf ("6. g - mg ");
    printf ("     21. lb - mg \n");
    printf ("7. g - kg ");
    printf ("     22. lb - g \n");
    printf ("8. g - oz ");
    printf ("     23. lb - kg \n");
    printf ("9. g - lb ");
    printf ("     24. lb - oz \n");
    printf ("10. g - ton ");
    printf ("   25. lb - ton \n");
    printf ("11. kg - mg ");
    printf ("   26. ton - mg \n");
    printf ("12. kg - g ");
    printf ("    27. ton - g \n");
    printf ("13. kg - oz ");
    printf ("   28. ton - kg \n");
    printf ("14. kg - lb ");
    printf ("   29. ton - oz \n");
    printf ("15. kg - ton ");
    printf ("  30. ton - lb \n");
    scanf ("%d", &c);
    switch (c){
        case 1:{
            printf ("mg - g \n");
            float a;
            printf ("Escribe la cantidad en miligramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en gramos es: %2.3f g \n", a * 0.001);
            break;
        }
        case 2:{
            printf ("mg - kg \n");
            float a;
            printf ("Escribe la cantidad en miligramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kilogramos es: %2.6f kg \n", a * 0.000001);
            break;
        }
        case 3:{
            printf ("mg - oz \n");
            float a;
            printf ("Escribe la cantidad en miligramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en onzas es: %2.6f oz \n", a * 0.000035);
            break;
        }
        case 4:{
            printf ("mg - lb \n");
            float a;
            printf ("Escribe la cantidad en miligramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en libras es: %2.6f lb \n", a * 0.000002);
            break;
        }
        case 5:{
            printf ("mg - ton \n");
            float a;
            printf ("Escribe la cantidad en miligramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en toneladas es: %2.9f ton \n", a * 0.000000001);
            break;
        }
        case 6:{
            printf ("g - mg \n");
            float a;
            printf ("Escribe la cantidad en gramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en miligramos es: %2.2f mg \n", a * 1000);
            break;
        }
        case 7:{
            printf ("g - kg \n");
            float a;
            printf ("Escribe la cantidad en gramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kilogramos es: %2.2f kg \n", a * 0.001);
            break;
        }
        case 8:{
            printf ("g - oz \n");
            float a;
            printf ("Escribe la cantidad en gramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en onzas es: %2.3f oz \n", a * 0.035);
            break;
        }
        case 9:{
            printf ("g - lb \n");
            float a;
            printf ("Escribe la cantidad en gramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en libras es: %2.4f lb \n", a * 0.0022);
            break;
        }
        case 10:{
            printf ("g - ton \n");
            float a;
            printf ("Escribe la cantidad en gramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en toneladas es: %2.6f ton \n", a * 0.000001);
            break;
        }
        case 11:{
            printf ("kg - mg \n");
            float a;
            printf ("Escribe la cantidad en kilogramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en miligramos es: %2.2f mg \n", a * 1000000);
            break;
        }
        case 12:{
            printf ("kg - g \n");
            float a;
            printf ("Escribe la cantidad en kilogramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en gramos es: %2.2f g \n", a * 1000);
            break;
        }
        case 13:{
            printf ("kg - oz \n");
            float a;
            printf ("Escribe la cantidad en kilogramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en onzas es: %2.2f oz \n", a * 35.27);
            break;
        }
        case 14:{
            printf ("kg - lb \n");
            float a;
            printf ("Escribe la cantidad en kilogramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en libras es: %2.2f lb \n", a * 2.2);
            break;
        }
        case 15:{
            printf ("kg - ton \n");
            float a;
            printf ("Escribe la cantidad en kilogramos \n");
            scanf ("%f", &a);
            printf ("La equivalencia en toneladas es: %2.2f ton \n", a * 0.001);
            break;
        }
        case 16:{
            printf ("oz - mg \n");
            float a;
            printf ("Escribe la cantidad en onzas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en miligramos es: %2.2f mg \n", a * 28349.52);
            break;
        }
        case 17:{
            printf ("oz - g \n");
            float a;
            printf ("Escribe la cantidad en onzas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en gramos es: %2.2f g \n", a * 28.34);
            break;
        }
        case 18:{
            printf ("oz - kg \n");
            float a;
            printf ("Escribe la cantidad en onzas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kilogramos es: %2.2f kg \n", a * 0.02);
            break;
        }
        case 19:{
            printf ("oz - lb \n");
            float a;
            printf ("Escribe la cantidad en onzas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en libras es: %2.2f lb \n", a * 0.06);
            break;
        }
        case 20:{
            printf ("oz - ton \n");
            float a;
            printf ("Escribe la cantidad en onzas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en toneladas es: %2.6f ton \n", a * 0.000028);
            break;
        }
        case 21:{
            printf ("lb - mg \n");
            float a;
            printf ("Escribe la cantidad en libras \n");
            scanf ("%f", &a);
            printf ("La equivalencia en miligramos es: %2.2f mg \n", a * 453592.4);
            break;
        }
        case 22:{
            printf ("lb - g \n");
            float a;
            printf ("Escribe la cantidad en libras \n");
            scanf ("%f", &a);
            printf ("La equivalencia en gramos es: %2.2f g \n", a * 453.59);
            break;
        }
        case 23:{
            printf ("lb - kg \n");
            float a;
            printf ("Escribe la cantidad en libras \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kilogramos es: %2.2f kg \n", a * 0.45);
            break;
        }
        case 24:{
            printf ("lb - oz \n");
            float a;
            printf ("Escribe la cantidad en libras \n");
            scanf ("%f", &a);
            printf ("La equivalencia en onzas es: %2.2f oz \n", a * 16);
            break;
        }
        case 25:{
            printf ("lb - ton \n");
            float a;
            printf ("Escribe la cantidad en libras \n");
            scanf ("%f", &a);
            printf ("La equivalencia en toneladas es: %2.5f ton \n", a * 0.00045);
            break;
        }
        case 26:{
            printf ("ton - mg \n");
            float a;
            printf ("Escribe la cantidad en toneladas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en miligramos es: %2.2f mg \n", a * 1000000000);
            break;
        }
        case 27:{
            printf ("ton - g \n");
            float a;
            printf ("Escribe la cantidad en toneladas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en gramos es: %2.2f g \n", a * 1000000);
            break;
        }
        case 28:{
            printf ("ton - kg \n");
            float a;
            printf ("Escribe la cantidad en toneladas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kilogramos es: %2.2f kg \n", a * 1000);
            break;
        }
        case 29:{
            printf ("ton - oz \n");
            float a;
            printf ("Escribe la cantidad en toneladas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en onzas es: %2.2f oz \n", a * 35273.96);
            break;
        }
        case 30:{
            printf ("ton - lb \n");
            float a;
            printf ("Escribe la cantidad en toneladas \n");
            scanf ("%f", &a);
            printf ("La equivalencia en libras es: %2.2f lb \n", a * 2204.62);
            break;
        }
        default: printf ("Intenta de nuevo \n");
    }
}
void temperatura (void){
    int d;

    printf ("1. %cC - %cF  ",167, 167);
    printf ("  4. %cF - %cK \n", 167, 167);
    printf ("2. %cC - %cK  ", 167, 167);
    printf ("  5. %cK - %cC \n", 167, 167);
    printf ("3. %cF - %cC  ", 167, 167);
    printf ("  6. %cK - %cF \n", 167, 167);
    scanf ("%d", &d);
    switch (d){
        case 1:{
            printf ("%cC - %cF \n", 167, 167);
            float a, b;
            printf ("Escribe la cantidad en grados celsius \n");
            scanf ("%f", &a);
            b = a * 1.8 + 32;
            printf ("La equivalencia en grados fahrenheit es: %2.2f %cF \n", b, 167);
            break;
        }
        case 2:{
            printf ("%cC - %cK \n", 167, 167);
            float a, b;
            printf ("Escribe la cantidad en grados celsius \n");
            scanf ("%f", &a);
            b = a + 273.15;
            printf ("La equivalencia en grados kelvin es: %2.2f %cK \n", b, 167);
            break;
        }
        case 3:{
            printf ("%cF - %cC \n", 167, 167);
            float a, b;
            printf ("Escribe la cantidad en grados fahrenheit \n");
            scanf ("%f", &a);
            b = (a - 32)/ 1.8;
            printf ("La equivalencia en grados celsius es: %2.2f %cC \n", b, 167);
            break;
        }
        case 4:{
            printf ("%cF - %cK \n", 167, 167);
            float a, b;
            printf ("Escribe la cantidad en grados fahrenheit \n");
            scanf ("%f", &a);
            b= ((a + 459.67) * 5)/9;
            printf ("La equivalencia en grados kelvin es: %2.2f %cK \n", b, 167);
            break;
        }
        case 5:{
            printf ("%cK - %cC \n", 167, 167);
            float a;
            printf ("Escribe la cantidad en grados kelvin \n");
            scanf ("%f", &a);
            printf ("La equivalencia en grados celsius es: %2.2f %cC \n", a - 273.15, 167);
            break;
        }
        case 6:{
            printf ("%cK - %cF \n", 167, 167);
            float a, b;
            printf ("Escribe la cantidad en grados kelvin \n");
            scanf ("%f", &a);
            b = ((a * 9)/5)- 459.67;
            printf ("La equivalencia en grados fahrenheit es: %2.2f %cF \n", b, 167);
            break;
        }
        default: printf ("Opci%cn no permitida \n", 162);
    }
}
void presion (void){
    int e;

    printf ("1. atm - kpa  ");
    printf ("    7. mmHg - atm \n");
    printf ("2. atm - mmHg  ");
    printf ("   8. mmHg - kpa \n");
    printf ("3. atm - pa  ");
    printf ("     9. mmHg - pa \n");
    printf ("4. kpa - atm  ");
    printf ("    10. pa - atm \n");
    printf ("5. kpa - mmHg  ");
    printf ("   11. pa - kpa \n");
    printf ("6. kpa - pa  ");
    printf ("     12. pa - mmHg \n");
    scanf ("%d", &e);
    switch (e){
        case 1:{
            printf ("atm - kpa \n");
            float a;
            printf ("Escribe la cantidad en atm%csferas \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en kilopascales es: %2.3f kpa \n", a * 101.325);
            break;
        }
        case 2:{
            printf ("atm - mmHg \n");
            float a;
            printf ("Escribe la cantidad en atm%csferas \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en mil%cmetros de mercurio es: %2.3f mmHg \n", 161, a * 1760.127);
            break;
        }
        case 3:{
            printf ("atm - pa \n");
            float a;
            printf ("Escribe la cantidad en atm%csferas \n", 162);
            scanf ("%f", &a);
            printf ("La equivalencia en pascales es: %2.2f pa \n", a * 101325);
            break;
        }
        case 4:{
            printf ("kpa - atm \n");
            float a;
            printf ("Escribe la cantidad en kilopascales \n");
            scanf ("%f", &a);
            printf ("La equivalencia en atm%csferas es: %2.4f atm \n", 162, a * 0.0098);
            break;
        }
        case 5:{
            printf ("kpa - mmHg \n");
            float a;
            printf ("Escribe la cantidad en kilopascales \n");
            scanf ("%f", &a);
            printf ("La equivalencia en mil%cmetros de mercurio es: %2.3f mmHg \n", 161, a * 7.501);
            break;
        }
        case 6:{
            printf ("kpa - pa \n");
            float a;
            printf ("Escribe la cantidad en kilopascales \n");
            scanf ("%f", &a);
            printf ("La equivalencia en pascales es: %2.4f pa \n", a * 1000);
            break;
        }
        case 7:{
            printf ("mmHg - atm \n");
            float a;
            printf ("Escribe la cantidad en mil%cmetros de mercurio \n", 161);
            scanf ("%f", &a);
            printf ("La equivalencia en atm%csferas es: %2.4f atm \n", 162, a * 0.0013);
            break;
        }
        case 8:{
            printf ("mmHg -kpa  \n");
            float a;
            printf ("Escribe la cantidad en mil%cmetros de mercurio \n", 161);
            scanf ("%f", &a);
            printf ("La equivalencia en kilopascales es: %2.2f kpa \n", a * 0.13);
            break;
        }
        case 9:{
            printf ("mmHg - pa \n");
            float a;
            printf ("Escribe la cantidad en mil%cmetros de mercurio \n", 161);
            scanf ("%f", &a);
            printf ("La equivalencia en pascales es: %2.2f pa \n", a * 133.3);
            break;
        }
        case 10:{
            printf ("pa - atm \n");
            float a;
            printf ("Escribe la cantidad en pascales \n");
            scanf ("%f", &a);
            printf ("La equivalencia en atm%csferas es: %2.5f atm \n", 162, a * 0.00001);
            break;
        }
        case 11:{
            printf ("pa - kpa \n");
            float a;
            printf ("Escribe la cantidad en pascales \n");
            scanf ("%f", &a);
            printf ("La equivalencia en kilopascales es: %2.4f kpa \n", a * 0.001);
            break;
        }
        case 12:{
            printf ("pa - mmHg \n");
            float a;
            printf ("Escribe la cantidad en pascales \n");
            scanf ("%f", &a);
            printf ("La equivalencia en mil%cmetros de mercurio es: %2.4f mmHg \n", 161, a * 0.0075);
            break;
        }
        default: printf ("Intenta de nuevo \n");
            break;
    }
}
