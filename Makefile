C_FILES := $(wildcard *.c)
O_FILES := $(patsubst %.c,%.o,$(C_FILES))
LIBRARY := libminlibc.a

all: $(LIBRARY)

clean:
	$(RM) $(O_FILES) $(LIBRARY)

$(LIBRARY): $(O_FILES)
	$(AR) cr $(LIBRARY) $(O_FILES)

%.o: %.c
	$(CC) -c -nostdinc -Iinclude/ -o $@ $<
