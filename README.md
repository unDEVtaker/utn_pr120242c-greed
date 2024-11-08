# 🎲 Trabajo Práctico Integrador - Greed
Este proyecto es un Trabajo Práctico Integrador de la materia Programación I para la carrera de Tecnicatura Universitaria en Programación. El objetivo es desarrollar una versión del juego de dados Greed, una variante del juego "Push your luck" creado por Bob Lancaster en 1990 para MSDOS, utilizando C++ como lenguaje de programación. El juego consiste en rondas en las que los jugadores deben lanzar dados y acumular puntos, mientras toman decisiones estratégicas para maximizar su puntaje sin perderlo.

## 🎮 Descripción del Juego
Greed es un juego que pone a prueba la capacidad de los jugadores para correr riesgos y decidir cuándo detenerse para asegurar sus puntos. Las reglas principales son las siguientes:

Los jugadores lanzan dos dados Bloqueadores y hasta cinco dados normales.
Los dados que coincidan con los valores de los dados Bloqueadores quedan bloqueados y no se pueden usar en las siguientes tiradas de la ronda.
El jugador puede elegir continuar tirando dados para acumular más puntos o detenerse para asegurar el puntaje acumulado en la ronda.
Si un jugador se queda sin dados disponibles, su puntaje de la ronda será cero.
Si todos los dados tienen el mismo valor (sin coincidir con los bloqueadores), el puntaje de la tirada se duplica, pero el jugador está obligado a tirar de nuevo.

## 🧑‍💻 Funcionalidades del Programa
El programa cuenta con un menú principal que ofrece las siguientes opciones:

### 📋 Menú Principal
- MODO UN JUGADOR
- MODO DOS JUGADORES
- ESTADÍSTICAS
- CRÉDITOS
- SALIR

### 🎲 Modo Un Jugador
Permite a un solo jugador comenzar una partida. Se solicita el nombre del jugador y, al finalizar la partida, si el puntaje es el más alto registrado, se almacena su nombre y puntaje.

### 👥 Modo Dos Jugadores
Permite a dos jugadores competir. Se solicita el nombre de ambos jugadores. Si al finalizar la partida alguno de ellos ha obtenido el puntaje más alto, se registra su nombre y puntaje.

### 📊 Estadísticas
Muestra el nombre y puntaje del jugador con el puntaje más alto, si existe. Las estadísticas se restablecen al cerrar la aplicación.

### 🏆 Créditos
Muestra el nombre del equipo desarrollador, junto con legajos, apellidos y nombres.

### ⚙️ Consideraciones Importantes
El proyecto está desarrollado en C++ como aplicación de consola.

Durante el juego, se debe mostrar:
- El nombre del jugador (o jugadores).
- Los puntos totales acumulados y los puntos obtenidos en cada ronda.
- Los valores de los dados bloqueadores y los dados de cada tirada.
- El puntaje de cada tirada y cuáles dados han sido bloqueados.
- Se utilizan funciones y vectores.
- Prohibido el uso de variables globales y la instrucción goto.
- Los lanzamientos de dados son aleatorios, utilizando srand y rand.

¡Gracias por visitar el repositorio y disfrutar del juego Greed! 🎉🎲
