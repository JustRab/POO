#include "Commons.h"
#include "Aldeano.h"
#include "commandh.h"


int main()
{
    int opc = 0;
    aldeano villager;
    Command command;

    cout << "Empiezas con 64 esmeraldas " << endl;

    while (opc <= 0)
    {
        cout << "" << endl;
        cout << "El estado actual del aldeano es: " << villager.tipo << endl;
        villager.setHealth(100);

        villager.setName("Juan");
        cout << "Nombre: " << villager.getName() << endl;

        cout << "Ingresa el comando (las opciones son): " << endl;
        cout << "rayo		mordida		  mapa		  libro		  composta" << endl;
        cout << "(Puedes curar a un aldeano zombie con una *manzana* o tener una oferta especial si el aldeano llega al nvl 10 con *max*) " << endl;
        string usuarioCommand;
        cin >> usuarioCommand;
        command.comandos(usuarioCommand);

        cout << "Quieres aceptar su oferta? (ingresa *aceptar* o *nel*) " << endl;
        string tradeo;
        cin >> tradeo;
        if (villager.emerald < villager.oferta) {
            cout << "Uy, que lastima, pero no tienes suficientes esmeraldas" << endl;
            tradeo = "nel";
        }

        command.Trading(tradeo);

        command.Experiencia(); 

        cout << "Deseas continuar? presiona 0, de lo contrario presiona otro numero mayor a 0" << endl;
        cin >> opc;
    }

    return 0;
}