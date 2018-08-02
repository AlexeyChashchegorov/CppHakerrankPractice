TESTS=\
	AppleAndOrange \
	BreakingTheRecords \
	BirthdayChocolate \
	DivisibleSumPairs

define test_for
	cat $(1).input | ../$(1) > $(1).output
	diff $(1).output $(1).expected
	rm $(1).output
endef

all: $(TESTS)

AppleAndOrange:
	$(call test_for,AppleAndOrange)

BreakingTheRecords:
	$(call test_for,BreakingTheRecords)

BirthdayChocolate:
	$(call test_for,BirthdayChocolate)

DivisibleSumPairs:
	$(call test_for,DivisibleSumPairs)
