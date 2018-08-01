BINARIES=AppleAndOrange BreakingTheRecords

CCX=c++
CCX_FLAGS=-std=c++1y -I../include

all: $(BINARIES)

AppleAndOrange: AppleAndOrange.cpp
	${CCX} ${CCX_FLAGS} AppleAndOrange.cpp -o AppleAndOrange

BreakingTheRecords: BreakingTheRecords.cpp
	${CCX} ${CCX_FLAGS} BreakingTheRecords.cpp -o BreakingTheRecords

clean:
	rm AppleAndOrange BreakingTheRecords
