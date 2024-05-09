
SUBDIRS:=$(wildcard */.)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

.PHONY: all $(SUBDIRS)

clean:
	rm -rf */*.o */*.out
	$(foreach DIR, $(SUBDIRS), make -C $(DIR) clean;)

