// FISH_STM32F4_Peripheral_Register_ADDRS.h
// Valid in v1.8
// FISH_STM32F4_Peripheral_Register_ADDRS
// FISH_RM_CONFIG_#DEFINES.h

// Conditional used in FISH_STM32F4_IAR.s to modify last dictionary link
// to include these constant definitions

//=============================== WORDCAT ====================================//
//NOEXEC HEADERFORWORDCATEGORIES
//	WC_FISH_SYS: = FISH System: CATEGORY

 SECTION .text : CONST (2)
WC_FISH_GPIO:
	DC8	0x80+4+5        // +4 is format chars constant
                                // +n is Name lenght
        DC8     0x0D, 0x0A
	DC8	'GPIO:'
        DC8     0x0D, 0x0A+0x80
 ALIGNROM 2,0xFFFFFFFF
	DC32	WC_FISH_PubRel_NFA        // Where this wordcat links in.


