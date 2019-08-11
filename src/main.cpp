#include "Margherita.hpp"
#include "Funghi.hpp"
#include "Pizzeria.hpp"
#include "RealSleep.hpp"
int main()
{
    RealSleep r;
    Pizzeria bravo("Bravo Pizza", r);
    Pizzas pizzas = {new Margherita{25.0}, new Funghi{30.0}};

    auto orderId = bravo.makeOrder(pizzas);
    auto price = bravo.calculatePrice(orderId);
    bravo.bakePizzas(orderId);
    bravo.completeOrder(orderId);

    return 0;
}
