if ((RS1 + insn.s_imm())==0x00000000000c101c)
{
	printf ("SS=%x\n", RS2);
	if (RS2 == 0x00)
		printf ("SPI Transfer Initiated\n");
	if (RS2 == 0x01)
		printf ("SPI Transfer Finished\n");
//	WRITE_RD(0x40);
}

else if ((RS1 + insn.s_imm())==0x00000000000c1010)
{
	printf ("Received bit=%x\n", RS2);
	//MMU.spi_receive(RS2);
}

else if ((RS1 + insn.s_imm())==0x00000000000c1018)
{
	printf ("Clock=%x\n", RS2);
}

else
	//printf ("\nHere");
	MMU.store_uint8(RS1 + insn.s_imm(), RS2);
