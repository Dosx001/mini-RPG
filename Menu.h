#include "Player.h"
#include "Inventory.h"

class Menu{
    private:
        Player *ptrPy;
        Inventory *ptrInvy;
    public:
        Menu(Player *Py, Inventory *Invy) {
            set_Py_Invy(Py, Invy);
        }
        void set_Py_Invy(Player *Py, Inventory *Invy);
        void quick_menu();
        void full_menu();
};
