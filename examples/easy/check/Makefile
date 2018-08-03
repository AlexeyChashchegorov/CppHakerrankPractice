SOURCES=${wildcard ../*.cpp}

TMP=$(SOURCES:%.cpp=%)
TESTS=$(TMP:../%=%)

all: $(TESTS)

$(TESTS): 
	cat $@.input | ../$@ > $@.output; diff $@.output $@.expected; rm $@.output

clean:
	echo $(TESTS)
