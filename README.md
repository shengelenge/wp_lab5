# wp-lab5

1. Napisz program, który uzupełni 20-elementową tablicę kolejnymi liczbami naturalnymi.
2. Napisz program, który wyświetli zawartość tablicy.
3. Napisz program, który dla podanej przez użytkownika liczby n<20 uzupełni n-elementową
tablicę kolejnymi liczbami Fibonacciego.
4. Napisz program, który wczyta od użytkownika liczbę n<100 oraz n elementów tablicy a
następnie wyświetli zawartość tablicy w odwrotnej kolejności.
5. Napisz program, który wczyta od użytkownika liczbę n<100 oraz n elementów tablicy a
następnie w drugiej tablicy umieści te same elementy w odwrotnej kolejności.
6. (Revers) Napisz program, który wczyta od użytkownika liczbę n<100 oraz n elementów tablicy a następnie zmodyfikuje tablicę tak, aby zawierała elementy w odwrotnej
kolejności.
7. (Sito Eratostenesa) Napisz program, który dla podanej przez użytkownika liczby n<10000
wypisze wszystkie liczby pierwsze mniejsze bądź równe n.
8. Korzystając z szablonu 05 tablice A.c, który wypełnia tablicę losowymi wartościami
napisz program, który zadeklaruje drugą tablicę i uzupełni ją sumami prefiksowymi
pierwszej tablicy
9. Korzystając z szablonu 05 tablice A.c, który wypełnia tablicę losowymi wartościami
napisz program, który wyznaczy jej maksymalną, minimalną oraz średnią wartość
10. Korzystając z szablonu 05 tablice A.c, który wypełnia tablicę losowymi wartościami
napisz program, który wyznaczy drugą największą wartość znajdującą się w tablicy.
11. Korzystając z szablonu 05 tablice A.c, który wypełnia tablicę losowymi wartościami
napisz program, który wyznaczy drugi największy element znajdującą się w tablicy.
12. Zmodyfikuj szablon 05 tablice A.c tak, aby wylosowana tablica była uporządkowana
niemalejąco.
Zadania dla chętnych:
1. Tablica A[0...N-1] zawiera liczby typu int. Dla danej liczby naturalnej k > 1 napisz
program realizujący przesunięcie cykliczne w prawo o k pozycji, czyli przesuwający zawartość pola A[i] na A[(i+k) mod N] dla każdego i < N.
Uwaga: postaraj się NIE korzystać z dodatkowej pamięci (nie deklaruj dodatkowej
tablicy)
8
2. Napisz funkcję, która jako parametr pobiera tablicę liczb typu int oraz N - rozmiar tej
tablicy. Możesz założyć, że w tablicy jest przechowywana permutacja zbioru {1,...,N}.
Funkcja powinna zmodyfikować tablicę, tak aby zawierała kolejną (w kolejności leksykograficznej) permutację oraz zwrócić true jeżeli to się udało lub false jeżeli to się nie
udało (dana permutacja była ostatnia w kolejności leksykograficznej).
Dla N=3 kolejność leksykograficzna jest następująca:
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
