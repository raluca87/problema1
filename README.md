```c
## Problema 1

# Functii:
- verif_caracter
- transform_index
- transform_caracter

# verif_caracter
Functia verif_caracter returneaza 1 in cazul in care sirul este format exclusiv
din litere mici sau mari, iar in caz contrar 0.

# transform_index
Functia transform_index mapeaza literele la un index numeric, ce se afla in
intervalul [0,51] (unde literele de la 'a' la 'z' se afla intre 0 si 25, iar 
literele de la 'A' la 'Z' intre 26 si 51,conform cerintei).

# transform_caracter
Functia traform_caracter este opusul functiei transform_index, intrucat
aceasta transforma numarul aflat in intervalul [0,51] in caracter.

# int main
In functia main are loc citirea celor doua siruri "cheie", respectiv "parola".
Prin concatenarea repetata a sirului cheie la el insusi, se ajunge la un sir
egal in lungime cu cel de-al doilea. Apoi prin intermediul functiilor
transform_caracter si transform_index se construieste sirul rez, care contine
parola criptata. Cazul "INVALID" este realizat prin apelarea functiei
verif_caracter, mai precis a valorii zero.
```
