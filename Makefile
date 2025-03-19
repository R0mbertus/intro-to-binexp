CC = gcc
CFLAGS_COMMON = -g

EXAMPLES_SRC = $(wildcard examples/*/*.c)
CHALLENGES_SRC = $(wildcard challenges/*/*.c)

EXAMPLES_BIN = $(EXAMPLES_SRC:.c=)
CHALLENGES_BIN = $(CHALLENGES_SRC:.c=)

# Function to read flags from a directory-specific flags.txt file
define get_flags
	$(if $(wildcard $(dir $(1))flags.txt),$(shell cat $(dir $(1))flags.txt),)
endef

all: examples challenges

examples: $(EXAMPLES_BIN)

examples/%: examples/%.c
	$(CC) $(CFLAGS_COMMON) $(call get_flags,$<) $< -o $@

challenges: $(CHALLENGES_BIN)

challenges/%: challenges/%.c
	$(CC) $(CFLAGS_COMMON) $(call get_flags,$<) $< -o $@

clean:
	@find examples challenges -type f -executable -exec rm -f {} +