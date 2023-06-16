# Proyecto - Resolución de la situación problema
En este codigo se proporciona un juego el cual cuenta una hsitoria sucesiva en donde el personaje pricipal se va encarando con distintos personajes y interactua con cada uno de ellos de manera distinta. Dependiendo como se interacuto con los personajes, el terminar el juego sera posible. 

## Descripción básica de la carpeta Proyecto

*Dentro de la carpeta Proyecto agrega los archivos necesarios para la solución de tu proyecto, no olvides que para compilar debes moverte a la carpeta Proyecto con el comando cd assignments/Proyecto*

EN esta carpeta hay varios archivos con los cuales se ejecuta el codigo. 

Todos los que terminan en .txt son archivos que contienen informacion que luego es desplegada en pantalla. Algunos de estos son puro texto o tambien son dibujos. 

Se puede ver que hay tres diferentes clases. La principal es la de Personaje.hpp y Personaje.cpp 
Las clases derivadas son Warrior y Friendly. 

En el archivo excercise se encuentra todo el codigo principal (main) y aqui es donde toda la forma del juego toma accion. 

## Comandos para pruebas locales, ejecución y depuración

- Comando para construir y ejecutar pruebas: `make` o `make test`
    * Si el ejecutable ya está construido, sólo teclea : `./build/appTests`

- Comando para construir y ejecutar la aplicación: `make run` 
    * Si el ejecutable ya está construido, sólo teclea : `./build/exercise`

- Comando para depurar: `make debug`
    * Para conocer los comandos de depuración consulta:
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/
     
- Comando para depurar con `vsCode` en `GitPod`: `make debugvs` 
    * Utilizar el depurador de la IDE.     