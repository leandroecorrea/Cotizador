#include "StoreRepository.h"

Store StoreRepository::getStore()
{
    Salesman* salesman = new Salesman(1, "Leandro", "Correa");
    Address* address = new Address("calle 148", "1578", "Berazategui", "Buenos Aires");
    return Store(salesman, "La tiendita", address);
}
