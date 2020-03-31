PROJECT 2 MERGESORT SERIAL AND PARALLEL OMP
PRESENTADO POR: OSCAR VELASCO CHIQUILLO
PRESENTADO A: CARLOS ALVAREZ
27 de Marzo de 2020

En este archivo se pretende describir el repositorio en el cual se encuentra el
Proyecto MERGESORT Serial & Parallel.

Link Repositorio en Github: https://github.com/Oscarvch03/CPCD-PROJECT-2-Merge-Sort

El anterior respositorio cuenta con 2 carpetas, 'WithBubbleSort' &
'WithInsertionSort'. A continuación se explica todo sobre ellas:


Gran diferencia entre ambas carpetas:

WithBubbleSort: En los archivos de esta carpeta, el algoritmo de ordenamiento
                secundario utilizado es BubbleSort

WithInsertionSort: En los archivos de esta carpeta, el algoritmo de ordenamiento
                secundario utilizado es InsertionSort



Para Compilar en Ambas Carpetas:

    'make generate': Compila generate.cpp que genera un vector de tamaño n.
    'make serial': Compila serial.cpp, donde se encuentra el algoritmo
                   MergeSort serial.
    'make parallel': Compila parallel.cpp, donde se encuentra el algoritmo
                     MergeSort parallel.
    'make serialUnit': Compila serialUnit.cpp, donde se hace una prueba unitaria
                       del MergeSort serial.
    'make parallelUnit': Compila parallelUnit.cpp, donde se hace una prueba
                         unitaria del MergeSort parallel.



Para Ejecutar en Ambas Carpetas:

    './generate argv1': Genera un vector de tamaño argv1 y lo escribe sobre un
                      .dat (vector.dat)
    './serial': Ejecuta MergeSort serial sobre el vector guardado en vector.dat
    './parallel': Ejecuta MergeSort parallel sobre el vector guardado en vector.dat
    './serialUnit': Ejecuta la prueba unitaria de MergeSort serial sobre el vector
                  guardado en vector.dat (Por favor probar con vector de tamaño
                  101 ya que se imprime en la terminal para verificar)
    './parallelUnit': Ejecuta la prueba unitaria de MergeSort parallel sobre el vector
                    guardado en vector.dat (Por favor probar con vector de tamaño
                    101 ya que se imprime en la terminal para verificar)


Para Ejecutar en el Cluster de la Universidad del Rosario:

    'sbatch generate.sh generate argv1': Se envía a la cola del Cluster generar
                                         un vector de tamaño argv1 (Por favor probar
                                         con un vector de tamaño 100Mill)
    'sbatch serial.sh serial': Se envía a la cola del Cluster ordenar el vector en
                               vector.dat usando MergeSort serial
                               Genera el archivo de salida serial.###.out
    'sbatch parallel4.sh parallel': Se envía a la cola del Cluster ordenar el vector en
                                  vector.dat usando MergeSort parallel (4 Proc)
                                  Genera el archivo de salida parallel4.###.out
    'sbatch parallel8.sh parallel': Se envía a la cola del Cluster ordenar el vector en
                                  vector.dat usando MergeSort parallel (8 Proc)
                                  Genera el archivo de salida parallel8.###.out
    'sbatch parallel12.sh parallel': Se envía a la cola del Cluster ordenar el vector en
                                   vector.dat usando MergeSort parallel (12 Proc)
                                   Genera el archivo de salida parallel12.###.out
    'sbatch parallel16.sh parallel': Se envía a la cola del Cluster ordenar el vector en
                                   vector.dat usando MergeSort parallel (16 Proc)
                                   Genera el archivo de salida parallel16.###.out


Finalmente, cada carpeta cuenta con el archivo TiemposAndSpeedUp.txt, en el cual
se encuentran registrados los tiempos serial y parallel(4, 8, 12, 16 Proc), y los
SpeedUp's calculados para el caso en el que el vector tiene 100Mill de elementos.
