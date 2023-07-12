CXX=g++
CXXFLAGS+=-I.

OUTPUT=Koperasi.exe

SOURCEDIR=src
OBJECTSDIR=obj

SOURCES=$(wildcard $(SOURCEDIR)/*.cpp)
OBJECTS=$(SOURCES:$(SOURCEDIR)/%.cpp=$(OBJECTSDIR)/%.o)

$(OUTPUT): $(OBJECTS) # Final Output
	$(CXX) $^ $(CXXFLAGS) -o $@

$(OBJECTSDIR)/%.o: $(SOURCEDIR)/%.cpp # Compile to object
	$(CXX) $< $(CXXFLAGS) -c -o $@

$(OBJECTS): | $(OBJECTSDIR)

$(OBJECTSDIR):
	mkdir $@

# WINDOWS UNCOMMENT INI
# clean:
# 	del /Q $(OBJECTSDIR)\*.o $(OUTPUT).exe


# INI LINUX AJA
clean:
	rm -f $(OBJECTSDIR)/*.o $(OUTPUT)