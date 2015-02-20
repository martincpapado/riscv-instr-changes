//if ((RS1 + insn.i_imm())==0x00000000000c101c)
//{
//	printf ("\nFOUND");
//	WRITE_RD(0x40);
//}
if ((RS1 + insn.i_imm())==0x00000000000c1014)
{
	//printf ("\nFOUND");
	//WRITE_RD(MMU.spi_send());
}
else
	WRITE_RD(MMU.load_uint8(RS1 + insn.i_imm()));
