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
## Hinweise

- Bitte beachten Sie, dass Sie diese Implementierung nur um Ihre Änderungen erweitern müssen. Nutzen also auch Sie die Code-Generierung für C++ in Papyrus und fügen Ihre Änderungen an den richtigen Stellen in diesem Code hinzu.
- **Technische Fragen** stellen Sie bitte immer in das in der Aufgabenstellung genannte Forum (für _Fragen zum Problem_ beachten Sie die gesonderten Hinweise in der Aufgabenstellung).
- **Implementieren Sie Testfälle**
- Sie können diese Installationsanleitung gern als Grundlage Ihrer eigenen Anleitung nutzen
- Für die Generierung eines Makefiles für Ihre Erweiterungen können Sie gern das Script _genMakefile.sh_ nutzen. **ES GIBT ABER KEINE GARANTIE, DASS DAS DORT GENERIERTE MAKEFILE FUNKTIONIERT!**

## Wann wird eine Abgabe mit **0 Punkten** bewertet
- Wenn Ihr Programm generell oder trotz der mitgelieferten Installationsanleitung nicht übersetzbar ist
- Wenn Ihre Installationsanleitung unbrauchbar oder gar nicht vorhanden ist
- Falls keine Änderung im Vergleich zur Vorlage erkennbar ist


Am Ende bleibt nur noch folgendes zu sagen:
# Viel Erfolg bei der Bearbeitung dieser Aufgabe :)
