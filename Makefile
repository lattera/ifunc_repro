PROG=	ifunc
SRCS=	ifunc.c

MK_CFI=yes
MK_CROSS_DSO_CFI=yes
MK_SAFESTACK=yes
MK_LLD_IS_LD=yes
MK_LLVM_NM_IS_NM=yes
MK_LLVM_OBJDUMP_IS_OBJDUMP=yes
MK_LLVM_AR_IS_AR=yes

.include <bsd.prog.mk>
