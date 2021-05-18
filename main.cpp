#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, j, j2, k, casos, cont = 0;
    string texto, texto2;
    cin >> casos;
    getchar();
    while (cont < casos){
        getline(cin, texto);
        for (i = 0;i < texto.length(); i++){
            if (texto[i] == 'A' || texto[i] == 'B' || texto[i] == 'C' || texto[i] == 'D' ||
                texto[i] == 'E' || texto[i] == 'F' || texto[i] == 'G' || texto[i] == 'H' ||
                texto[i] == 'I' || texto[i] == 'J' || texto[i] == 'K' || texto[i] == 'L' ||
                texto[i] == 'M' || texto[i] == 'N' || texto[i] == 'O' || texto[i] == 'P' ||
                texto[i] == 'Q' || texto[i] == 'R' || texto[i] == 'S' || texto[i] == 'T' ||
                texto[i] == 'U' || texto[i] == 'V' || texto[i] == 'W' || texto[i] == 'X' ||
                texto[i] == 'Y' || texto[i] == 'Z' || texto[i] == 'a' || texto[i] == 'b' ||
                texto[i] == 'c' || texto[i] == 'd' || texto[i] == 'e' || texto[i] == 'f' ||
                texto[i] == 'g' || texto[i] == 'h' || texto[i] == 'i' || texto[i] == 'j' ||
                texto[i] == 'k' || texto[i] == 'l' || texto[i] == 'm' || texto[i] == 'n' ||
                texto[i] == 'o' || texto[i] == 'p' || texto[i] == 'q' || texto[i] == 'r' ||
                texto[i] == 's' || texto[i] == 't' || texto[i] == 'u' || texto[i] == 'v' ||
                texto[i] == 'w' || texto[i] == 'x' || texto[i] == 'y' || texto[i] == 'z'){
                    texto[i] = texto[i] + 3;
            }
        }
        j2 = texto.length() - 1;
        texto2 = texto;
        for (j = 0; j < texto.length(); j++){
            texto[j] = texto2[j2];
            j2--;
        }
        k = texto.length() / 2;
        for (k; k < texto.length(); k++){
            texto[k] = texto[k] - 1;
        }
        cout << texto <<endl;
        cont++;
    }
    return 0;
}
