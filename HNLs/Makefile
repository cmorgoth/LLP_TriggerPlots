CXX = $(shell root-config --cxx)
LD = $(shell root-config --ld)

REPO = $(shell pwd)
#REPO = $(shell git rev-parse --show-toplevel)/model
#COMMON = $(shell git rev-parse --show-toplevel)/common


CPPFLAGS := $(shell root-config --cflags) -I$(REPO)/include -I$(REPO)/include -I$(REPO)/src
LDFLAGS := $(shell root-config --glibs) $(STDLIBDIR)  -lRooFit -lRooFitCore

CPPFLAGS += -g -std=c++1z

TARGET = Make_HNL_Limit_Plot
SRC = $(REPO)/app/Make_HNL_Limit_Plot.cc
OBJ = $(SRC:.cc=.o)

all : $(TARGET)

$(TARGET) : $(OBJ)
	$(LD) $(CPPFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)
	@echo $@
	@echo $<
	@echo $^

%.o : %.cc
	$(CXX) $(CPPFLAGS) -o $@ -c $<
	@echo $@
	@echo $<

clean :
	rm -f *.o app/*.o src/*.o include/*.o $(TARGET) *~
