
#
LOCALDIR = app/linuxkern/uk-proxy

include ${SDK}/mk/Make.config

KERN_LIBS =

ifeq ($(kernel_version),2_4)
MODULE = $(LIBDIR)/linux-uk-proxy.o
else
KERNEL_MODULE_DIR = kernel_module

THIS_MOD_NAME := linux-uk-proxy
MODULE = $(LIBDIR)/$(THIS_MOD_NAME).o
KMODULE = $(LIBDIR)/$(THIS_MOD_NAME).ko

build: $(MODULE) $(KMODULE)
endif

$(MODULE): $(BLDDIR)/.tree $(BOBJS) $(KERN_LIBS)
	$(LD) $(MODULE_LDFLAGS) -r $(BOBJS) $(KERN_LIBS) -o $@
ifneq ($(kernel_version),2_4)
$(KMODULE): $(MODULE)
	rm -fr $(BLDDIR)/$(KERNEL_MODULE_DIR)
	mkdir $(BLDDIR)/$(KERNEL_MODULE_DIR)
	cp ${SDK}/mk/Makefile.linux-kmodule-2_6 $(BLDDIR)/$(KERNEL_MODULE_DIR)/Makefile
	MOD_NAME=$(THIS_MOD_NAME) $(MAKE) -C $(BLDDIR)/$(KERNEL_MODULE_DIR) $(THIS_MOD_NAME).ko
endif

include ${SDK}/mk/Make.depend

# Make.depend is before clean:: so that Make.depend's clean:: runs first.

clean::
	$(RM) $(BOBJS) $(MODULE)

ifneq ($(kernel_version),2_4)
.PHONY: build
endif
