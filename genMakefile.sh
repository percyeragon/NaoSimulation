#!/bin/bash

#
# Dieses Skript sammelt alle Abhaengigkeiten fuer die Generierung eines
# Makefiles zusammen.
# Beispiel fuer die Benutzung (Speichert das generierte Makefile in einer Datei mit Namen "Makefile" ab):
#   $ ./genMakefile.sh > Makefile
#   ACHTUNG: BENUTZUNG AUF EIGENE GEFAHR!!! (ES GIBT KEINE GARANTIE, DASS DAS GENERIERTE MAKEFILE FUNKTIONIERT!!)

## KONFIGURATION DES SKRIPTS ##
# Verwendeter C++-Compiler
cxx_cc='g++'
# Compiler-Flags fuer den C++-Compiler (erzeugen von Debugging-Infos; Kompilieren gemaess C++11-Standard)
cxx_flags='-g -O0 -std=c++11'
# Pfade zu den Include-Dateien der externen Libs
includedirs='-I/usr/local/include -I.'
# Flags fuer die Konfiguration von ODE
ode_flags='-DdTRIMESH_ENABLED -DDRAWSTUFF_TEXTURE_PATH="\"/usr/local/include/drawstuff/textures\""'
# Alle verwendeten Libraries (Auf die Reihenfolge ist zu achten!)
libdirs='-ldrawstuff -lode -lX11 -lGLU -lGL -lrt -lm -lpthread'
# Ausgelieferte Binary
bin_file='naoSimTest'


# Sammle in allen Unterordnern alle C++-Quelldateien zusammen
files=""
targets=""
for file in $(find . -type f -name '*.cpp')
do
    files="$file $files"
    targets="${file%.cpp}.o $targets"
done

# Generierung des Makefiles
echo -e "# Verwendeter C++-Compiler"
echo -e "CXX:=$cxx_cc"
echo -e "# Verwendete C++-Compiler-Flags"
echo -e "CXX_FLAGS:=$cxx_flags"
echo -e "# Flags fuer ODE"
echo -e "ODE_FLAGS:=$ode_flags"
echo -e "# Pfade zu allen eigebundenen externen Header-Dateien"
echo -e "INCLUDE_DIRS:=$includedirs"
echo -e "# Eingebundene Libraries"
echo -e "LIBS:=$libdirs"
echo -e "# Alle C++-Quelldateien zusammengesammelt"
echo -e "FILES:=$files"
echo -e "# Alle nach dem Compilieren erzeugten Object-Files"
echo -e "TARGETS:=$targets"
echo -e "BINFILE:=$bin_file"
echo -e ""
echo -e ""
echo -e "# Sorgt dafuer, dass alle Object-Files zu einer ausfuehrbaren Datei zusammengebaut werden"
echo -e 'exe: $(TARGETS)'
echo -e '\t$(CXX) -o $(BINFILE) $(TARGETS) $(LIBS)'
echo -e ""
echo -e '# Erzeugt aus einer C++-Quelldatei eine entsprechende Object-Datei'
echo -e '%.o: %.cpp'
echo -e '\t$(CXX) $(CXX_FLAGS) $(ODE_FLAGS) $(INCLUDE_DIRS) -c $< -o $@'
echo -e ""
echo -e "clear:"
echo -e '\trm -f $(TARGETS)'
echo -e '\trm -f naoSimTest'
echo -e ""
echo -e ".PHONY: clear"
