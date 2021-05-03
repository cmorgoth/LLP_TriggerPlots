CXX = $(shell root-config --cxx)
LD = $(shell root-config --ld)

INC = $(shell pwd)

CPPFLAGS := $(shell root-config --cflags) -I$(INC)/include
LDFLAGS := $(LDFLAGS) $(shell root-config --glibs) -lMathMore
CPPFLAGS += -g

TARGET  = Acceptance
#TARGET1 = NormalizeNtuple

SRC = app/Acceptance.cc src/MuonSystem.cc src/CommandLineInput.cc
#SRC1 = app/NormalizeNtuple.cc src/CommandLineInput.cc src/SimpleTable.cc

OBJ = $(SRC:.cc=.o)
#OBJ1 = $(SRC1:.cc=.o)

all : $(TARGET)# $(TARGET1)

$(TARGET) : $(OBJ)
	$(LD) $(CPPFLAGS) -o $(TARGET) $(OBJ) $(LDFLAGS)
	@echo $@
	@echo $<
	@echo $^

#$(TARGET1) : $(OBJ1)
#	$(LD) $(CPPFLAGS) -o $(TARGET1) $(OBJ1) $(LDFLAGS)
#	@echo $@
#	@echo $<
#	@echo $^

%.o : %.cc
	$(CXX) $(CPPFLAGS) -o $@ -c $<
	@echo $@
	@echo $<
clean :
	rm -f *.o src/*.o $(TARGET) $(TARGET1) app/*.o include/*.o *~
