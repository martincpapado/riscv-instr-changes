//if ((RS1 + insn.i_imm())==0x00000000000c101c)
//	printf ("\nFOUND");
WRITE_RD(sext_xprlen(RS1 + insn.i_imm()));
