require_xpr64;
//if ((RS1 + insn.i_imm())==0x00000000000c101c)
//	printf ("\nFOUND");
//printf( "\nAddress=%x", (RS1+insn.i_imm()));
WRITE_RD(MMU.load_int64(RS1 + insn.i_imm()));
