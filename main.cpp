
# include <iostream>
using namespace std;

int main() {
    double precio;
    double precio_d;
    double descuento, monto;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese el descuento %: ";
    cin >> descuento;
    cout << "Ingrese el monto minimo para que el descuento sea valido: ";
    cin >> monto;

    if (precio > monto) {
        precio_d = precio - precio*(descuento*0.01);
        cout << "El precio final es " << precio_d;
    }
    else {
        cout << "El descuento no aplica para este producto.";
    }
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.