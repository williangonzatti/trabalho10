int fatorial (int numero)
{
    int total=1, cont;

    for (cont=numero; numero>1; numero--)
    {
        total = total * (numero);
    }
    return total;
}

int exponenciacao (int numero, int expoente)
{
    int potencia, contador;


    potencia = 1;
    contador = 0;


    while (contador != expoente)
    {
        potencia = potencia * numero;
        contador = contador + 1;
    }

    return potencia;
}


