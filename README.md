# NaoSimCode

Diese Vorlage enthält die aus der aktuellen Modellvorlage generierte
Implementierung. Diese wurde entsprechend manuell angepasst.

## Installation unter Ubuntu 20.04 LTS 

#### Abhängigkeiten

```bash
sudo apt install make build-essential g++-8 freeglut3 freeglut3-dev gawk xorg pkgconf 
```

#### ODE
 - herunterzuladen unter https://bitbucket.org/odedevs/ode/downloads/  
 Alternativ dazu direkt [ODE-0.16.1](https://bitbucket.org/odedevs/ode/downloads/ode-0.16.1.tar.gz) 
 - Folgende Anweisungen ausführen  
 ```bash  
  ./configure --prefix=/usr/local --enable-double-precision --with-drawstuff=X11 --with-demos CFLAGS='-O2 -fPIC -g' CXXFLAGS='-O2 -g -FPIC'  
  make  
  sudo make install  
  sudo cp -p drawstuff/src/.libs/libdrawstuff.* /usr/local/lib/  
  sudo cp -rp include/drawstuff /usr/local/include/  
  sudo cp -rp drawstuff/textures /usr/local/include/drawstuff/
  ```

### Installation der Simulation
im Wurzelverzeichnis der Simulation (der Ordner, in dem auch diese README-Datei zu finden ist) folgenden Befehl eingeben:
```bash
make
```

## Testprogramm starten
nach der erolgreichen Installation kann die Simulation mit dem folgenden Aufruf getestet werden:
```bash
./naoSimTest
```

## Temporäre Dateien löschen (.o-Dateien)
Um Dateien zu löschen, die während des Bauens in den Arbeitsverzeichnissen entstanden sind, kann folgender Befehl aufgerufen werden:
```bash
make clear
```
_(Die Funktion "clear" wird auch mitgeneriert, wenn Sie für die Erzeugung Ihres eigenen Makefiles das Script genMakefile.sh verwenden [s. Hinweise])_
