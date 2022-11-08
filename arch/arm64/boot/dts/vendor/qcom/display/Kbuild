dtbo-$(CONFIG_ARCH_NEO) += display/neo-sde.dtbo \
		display/neo-sde-display-idp-overlay.dtbo

ifneq ($(CONFIG_ARCH_QTI_VM), y)

ifneq (,$(filter AI2201,$(ASUS_BUILD_PROJECT)))
$(warning build display dtbo for AI2201 8450 ...)
dtbo-$(CONFIG_ARCH_WAIPIO) += display/waipio-sde.dtbo \
		display/waipio-sde-display-mtp-overlay.dtbo \
		display/AI2201-8450-EVB-display-overlay.dtbo \
		display/AI2201-8450-PreSR-display-overlay.dtbo \
		display/AI2201-8450-SR1-display-overlay.dtbo \
		display/AI2201-8450-SR2-display-overlay.dtbo \
		display/AI2201-8450-ER1-display-overlay.dtbo \
		display/AI2201-8450-ER2-display-overlay.dtbo \
		display/AI2201-8450-PR-display-overlay.dtbo \
		display/AI2201-8450-MP-display-overlay.dtbo

else ifneq (,$(filter AI2202,$(ASUS_BUILD_PROJECT)))
$(warning build display dtbo for AI2202...)
dtbo-$(CONFIG_ARCH_WAIPIO) += display/waipio-sde.dtbo \
		display/waipio-sde-display-mtp-overlay.dtbo \
		display/AI2202-EVB-display-overlay.dtbo \
		display/AI2202-SR-display-overlay.dtbo \
		display/AI2202-SR2-display-overlay.dtbo \
		display/AI2202-ER-display-overlay.dtbo \
		display/AI2202-ER2-2-display-overlay.dtbo

else
dtbo-$(CONFIG_ARCH_WAIPIO) += display/waipio-sde.dtbo \
		display/waipio-sde-display-mtp-overlay.dtbo \
		display/waipio-sde-display-cphy-mtp-overlay.dtbo \
		display/waipio-sde-display-cdp-overlay.dtbo \
		display/waipio-sde-display-qrd-overlay.dtbo \
		display/waipio-sde-display-hdk-overlay.dtbo \
		display/waipio-sde-display-waipio-lemur-cdp-overlay.dtbo \
		display/waipio-sde-display-waipio-lemur-mtp-overlay.dtbo \
		display/waipio-sde-display-rumi-overlay.dtbo
endif
else
dtbo-$(CONFIG_ARCH_WAIPIO) += display/trustedvm-waipio-sde-display-mtp-overlay.dtbo \
		display/trustedvm-waipio-sde-display-cdp-overlay.dtbo \
		display/trustedvm-waipio-sde-display-rumi-overlay.dtbo \
		display/trustedvm-waipio-sde-display-qrd-overlay.dtbo
endif

ifneq ($(CONFIG_ARCH_QTI_VM), y)
ifneq (,$(filter AI2201,$(ASUS_BUILD_PROJECT)))
$(warning build display dtbo for AI2201 8475 ...)
dtbo-$(CONFIG_ARCH_CAPE) += display/cape-sde.dtbo \
		display/cape-sde-display-mtp-overlay.dtbo \
        display/AI2201-8475-EVB_ER1-display-overlay.dtbo \
		display/AI2201-8475-ER2-display-overlay.dtbo \
		display/AI2201-8475-PR-display-overlay.dtbo \
		display/AI2201-8475-PR2-display-overlay.dtbo \
		display/AI2201-8475-PR2_2-display-overlay.dtbo \
		display/AI2201-8475-MP-display-overlay.dtbo

else ifneq (,$(filter AI2202,$(ASUS_BUILD_PROJECT)))
$(warning build display dtbo for AI2202 8475...)
dtbo-$(CONFIG_ARCH_CAPE) += display/cape-sde.dtbo \
		display/cape-sde-display-mtp-overlay.dtbo \
        display/AI2202-8475-EVB-display-overlay.dtbo \
		display/AI2202-8475-ER2-display-overlay.dtbo \
		display/AI2202-8475-ER2-2-display-overlay.dtbo \
		display/AI2202-8475-PR1-display-overlay.dtbo \
		display/AI2202-8475-PR2-display-overlay.dtbo \
		display/AI2202-8475-PR3-display-overlay.dtbo

else
dtbo-$(CONFIG_ARCH_CAPE) += display/cape-sde.dtbo \
		display/cape-sde-display-atp-overlay.dtbo \
		display/cape-sde-display-cdp-overlay.dtbo \
		display/cape-sde-display-cdp-qhd-overlay.dtbo \
		display/cape-sde-display-mtp-overlay.dtbo \
		display/cape-sde-display-mtp-120fps-overlay.dtbo \
		display/cape-sde-display-mtp-nodisplay-overlay.dtbo \
		display/cape-sde-display-qrd-overlay.dtbo
endif
else
dtbo-$(CONFIG_ARCH_CAPE) += display/trustedvm-cape-sde-display-qrd-overlay.dtbo
endif

ifneq ($(CONFIG_ARCH_QTI_VM), y)
dtbo-$(CONFIG_ARCH_DIWALI) += display/diwali-sde.dtbo \
		display/diwali-sde-display-atp-overlay.dtbo \
		display/diwali-sde-display-idp-overlay.dtbo \
		display/diwali-sde-display-idp-amoled-overlay.dtbo \
		display/diwali-sde-display-qrd-overlay.dtbo \
		display/diwali-sde-display-rumi-overlay.dtbo
else
dtbo-$(CONFIG_ARCH_DIWALI) += display/trustedvm-diwali-sde-display-idp-overlay.dtbo \
		display/trustedvm-diwali-sde-display-qrd-overlay.dtbo
endif

always-y    := $(dtb-y) $(dtbo-y)
subdir-y    := $(dts-dirs)
clean-files    := *.dtb *.dtbo
