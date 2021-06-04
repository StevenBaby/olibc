BUILD:=./build

# DEBUG:=
DEBUG:=-g 
INCLUDE:= -I ./src
CFLAGS:=  -m32 -fno-builtin -fno-stack-protector \
			-nostdlib -nostdinc -nostartfiles -nodefaultlibs
LDFLAGS:= -m elf_i386 -static

CC:=gcc
AR:=ar
LD:=ld

define make_dirs
	@mkdir -p $1
endef

LIB_OBJECTS:=  	$(BUILD)/stdio.o \
				$(BUILD)/stdlib.o \
				$(BUILD)/string.o \

all: main lib
	-

main: $(BUILD)/main.o $(BUILD)/crt.o $(BUILD)/olibc.a 
	$(CC) $(CFLAGS) $(DEBUG) -e onix_crt_entry $^ -o $@

lib: $(BUILD)/olibc.a
	-

$(BUILD)/olibc.a: $(LIB_OBJECTS)
	$(AR) -rs $@ $^

$(BUILD)/%.o: src/%.c src/%.h
	$(call make_dirs,$(dir $@))
	$(CC) $(CFLAGS) $(INCLUDE) $(DEBUG) -c $< -o $@

$(BUILD)/%.o: src/%.c
	$(call make_dirs,$(dir $@))
	$(CC) $(CFLAGS) $(INCLUDE) $(DEBUG) -c $< -o $@

.PHONY:clean
clean:
	rm -rf $(BUILD)
	rm -rf main
