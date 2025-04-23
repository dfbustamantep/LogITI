# Robocode
## Partes del robot
- Body: Lleva enciam el arma y el radar,se encarga de los movimientos
- Gun: Se encarga de disparar con energia determinada
- Radar: Detecta los otros tanques

## Comandos
- Ahead: Se mueve hacia adelante un numero de pixeles
- TurnGunRight: Mueve el arma en grados
- Back: Se mueve hacia atras un numero de pixeles

## Funciones
- getOthers() : Numero de robots
- stop() : Para
- resume () : 
- getEnergy()
- Para imprimir algo out.println()

## Eventos
- onBulletMissed(BulletMissedEvent event): Dispara el evento en caso que nuestra bala falle
En Scanned robot se puede usar e.getDistance() para saber la dsitancia del otro robot
- El while ocurre mientras que no suceda ninguna de los otros metodos