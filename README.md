# Proyecto: Conexión del NodeMCU a Oracle Cloud Infrastructure
///////REPOSITORIO OBSOLETO, NO SE AVANZÓ MÁS EN ESTE REPOSITORIO Y NO SE ENCEUNTRA FUNCIONAL.////////

Este repositorio contiene el código y la documentación necesarios para permitir que un microcontrolador NodeMCU se conecte a una base de datos en Oracle Cloud Infrastructure (OCI) y envíe datos de sensores a dicha base de datos. El objetivo es facilitar la recopilación y almacenamiento de datos de sensores en la nube, permitiendo un acceso fácil y análisis posterior.

## Descripción

El proyecto utiliza un NodeMCU V3 como controlador principal, que se conecta a múltiples sensores a través de un sistema de multiplexores. Los datos recopilados por los sensores son enviados a una base de datos MySQL alojada en Oracle Cloud Infrastructure mediante solicitudes HTTP. Este enfoque permite la monitorización remota y el análisis de datos en tiempo real.

## Características

- Conexión WiFi para el NodeMCU.
- Lectura de múltiples sensores utilizando multiplexores.
- Envío de datos a una base de datos MySQL en OCI.
- Interfaz simple en PHP para recibir y almacenar datos.

## Requisitos

- NodeMCU V3 o compatible.
- Sensores conectados al NodeMCU.
- Acceso a Oracle Cloud Infrastructure.
- Conexión a Internet.

## Instalación

1. Clona este repositorio en tu máquina local.
2. Configura tu base de datos en OCI y sube el archivo PHP necesario para recibir los datos.
3. Modifica el código del NodeMCU con tus credenciales WiFi y la URL del archivo PHP.
4. Sube el código al NodeMCU utilizando Arduino IDE o PlatformIO.

## Uso

Una vez que el sistema esté configurado, el NodeMCU comenzará a leer los valores de los sensores y enviarlos a la base de datos en intervalos regulares. Puedes monitorear la base de datos para verificar que los datos se están almacenando correctamente.

## Contribuciones

Las contribuciones son bienvenidas. Si deseas mejorar este proyecto, por favor abre un *issue* o envía un *pull request*.

## Licencia

Este proyecto está bajo la Licencia MIT. Consulta el archivo LICENSE para más detalles.

## Contacto

Para más información o preguntas, puedes contactar al autor del proyecto a través de su perfil en GitHub.

## MISCELANEO
Readme generado automáticamente, información sujeta a cambios.
