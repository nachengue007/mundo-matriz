# mundo_matriz

## Que es
Es un programa de matrices escrito en c++ y hecho para GNU/Linux 

## Como usarlo en otros sistemas operativos
Aunque se puede modificar para que corra correctamente en macOS o en Windows solo cambiando el system("clear") por sus respectivos comandos para limpiar la pantalla y que sea mas organizado el uso del programa.

Es tan sensillo como cambiar lo que esta dentro de las comillas y dependiendo del sistema operativo que tengas, usa el comando siguiendo esta tabla para el correcto uso del programa

```
Linux y macOS: system("clear");

Windows: system("cls");
```

## Edicion y Compilacion
Para **Linux** recomiendo tener el g++ solamente y usar estos comandos:

```
$ g++ mundo_matriz.cpp -o mundo_matriz
$ ./mundo_matriz
```

Si les tira error usen este comando:

```
$ sudo apt-get -y update
$ sudo apt-get -y upgrade
$ sudo apt-get install build-essential
```

Si quieren editar su codigo o directamente verlo pueden usar **nano**, **vim**, **Geany** o cualquier IDE o editor de texto que tengan a mano, si no quieren usar la terminal les recomiento Geany ya que es muy amigable para la gente que no le gusta usar el mismo o no entienden mucho como usarlo y son nuevos.

Para **macOS** tambien recomiendo tener g++. Como nunca toque una mac, les dejo un link https://www.edparrish.net/common/macgpp.php 

Para **Windows** no tengo mucho que comentar ya que no suelo usar el cmd asique solo recomiendo que usen Visual Studio o sino Dev-C++ que son los unicos IDEs que llegue a usar antes de que me pase a Linux.
