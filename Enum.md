Declaraciones de enumeración de C++
===================================
Una enumeración es un tipo definido por el usuario que consta de un conjunto de constantes enteras con nombre conocidas como enumeradores.

Una enumeración proporciona contexto para describir un intervalo de valores que se representan como constantes con nombre, y también se denominan enumeradores. En los tipos de enumeración original de C y C++, los enumeradores incompletos están visibles en el ámbito en el que se declara enum. En enumeraciones de ámbito, el nombre del enumerador debe calificarse con el nombre de tipo enum. El ejemplo siguiente muestra esta diferencia básica entre las dos clases de enumeraciones:


```cpp
namespace CardGame_Scoped
{
    enum class Suit { Diamonds, Hearts, Clubs, Spades };

    void PlayCard(Suit suit)
    {
        if (suit == Suit::Clubs) // Enumerator must be qualified by enum type
        { /*...*/}
    }
}
```

```cpp
namespace CardGame_NonScoped
{
    enum Suit { Diamonds, Hearts, Clubs, Spades };

    void PlayCard(Suit suit)
    {
        if (suit == Clubs) // Enumerator is visible without qualification
        { /*...*/
        }
    }
}
```

A cada nombre de la enumeración se le asigna un valor entero que corresponde al lugar que ocupa en el orden de los valores de la enumeración. De forma predeterminada, al primer valor se asigna 0, al siguiente se asigna 1 y así sucesivamente, pero puede establecer explícitamente el valor de un enumerador, como se muestra aquí:

------------------------------------------------------------------------------------------
```cpp
enum Suit { Diamonds = 1, Hearts, Clubs, Spades };
```
------------------------------------------------------------------------------------------

El enumerador Diamonds tiene asignado el valor 1. Los enumeradores subsiguientes, si no se les asigna un valor explícito, reciben el valor del enumerador anterior más uno. En el ejemplo anterior, Hearts tendría el valor 2, Clubs tendría 3, etc.

Cada enumerador se trata como una constante y debe tener un nombre único dentro del ámbito, donde enum está definido (para las enumeraciones sin ámbito) o en la enumeración propia (para las enumeraciones de ámbito). Los valores especificados en los nombres no tienen que ser únicos. Por ejemplo, si la declaración de una enumeración sin ámbito Suit es esta:

------------------------------------------------------------------------------------------
```cpp
enum Suit { Diamonds = 5, Hearts, Clubs = 4, Spades };
```
------------------------------------------------------------------------------------------

Los valores de Diamonds, Hearts, Clubs y Spades son 5, 6, 4 y 5, respectivamente. Observe que 5 se utiliza más de una vez; esto se permite incluso aunque pueda no ser intencionado. Estas reglas son las mismas para las enumeraciones de ámbito.