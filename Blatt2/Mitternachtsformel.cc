#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
    double v;
    std::cout << "a = " << std::flush;
    std::cin >> v;

    double w;
    std::cout << "b = " << std::flush;
    std::cin >> w;

    double x;
    std::cout << "c = " << std::flush;
    std::cin >> x;

    if (v == 0 || w == 0 || v == w)
    {
        std::cout << "Eingabe Fehlerhaft, a oder b ist null oder gleich" << std::endl;
    }
    else
    {
        double y1 = ((-1) * w - std::sqrt(w * w - 4 * v * x)) / (2*v);

        double y2 = ((-1) * w + std::sqrt(w * w - 4 * v * x)) / (2*v);

//Optional: negative 0 für bessere Darstellung postitiv machen
        if (y1 == -0.0)
        {
            y1 = 0.0;
        }
         if (y2 == -0.0)
        {
            y2 = 0.0;
        }

//Falls Nullstellen gleich sind, dann nur eine von beiden Ausgeben
        if (y1 == y2)
        {
            std::cout << "Die Lösungsmenge ist " << y1 << std::endl;
        }
        else
        {
            std::cout << "Die Lösungsmenge ist " << y1 << " und " << y2 << std::endl;
        }

        return 0;
    }

}