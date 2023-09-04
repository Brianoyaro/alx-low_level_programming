#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
  
const char *sys_name(uint8_t);
const char *type_name(uint16_t);
const char *machine_name(uint16_t);
  
#define READ(var), fread(&(var), sizeof(var), 1, fin)
  
int main()
{
	int i;
	FILE *fin = fopen("a.out", "rb");
	if (!fin)
	{
		fprintf(stderr, "ERROR opening the file\n");
		exit(-1);
	}
	
	u_int e_ident[16];
	uint16_t e_type, e_machine;
	uint32_t e_version;

	READ(e_ident);
	READ(e_type);
	READ(e_machine);
	READ(e_version);
	printf("ELF Header:\n");
	printf("Magic:\t");
	for (i = 0; i < 16; i++)
		printf("%02x ", e_ident[i]);
	printf("\nClass:\t");
	if (e_ident[4] == 1)
		printf("ELF32\n");
	else
		printf("ELF64\n");
	printf("Data:\t");
	if (e_ident[5] == 1)
		printf("little endian\n");
	else
		printf("big endian\n");
	printf("Version: %u\n", e_ident[6]);
	printf("OS:\t%s\n", sys_name(e_ident[7]));
	printf("ABI Version:\t %u\n", e_ident[8]);
	printf("Type:\t%s\n", type_name(e_type));
	printf("Machine:\t%s\n", machine_name(e_machine));
	printf("Version:\t 0x%x\n", e_version);
	if (e_ident[4] == 1)
	{
		uint32_t e_entry, e_phoff, e_shoff;
		READ(e_entry);
		READ(e_phoff);
		READ(e_shoff);
		printf("Entry point address:\t 0x%x\n", e_entry);
		printf("Start of program headers:\t %u\n", e_phoff);
		printf("Start of section headers:\t %u\n", e_shoff);
	}
	else if (e_ident[4] == 2)
	{
		uint64_t e_entry, e_phoff, e_shoff;
		READ(e_entry);
		READ(e_phoff);
		READ(e_shoff);
		printf("Entry point address:\t 0x%lx\n", e_entry);
		printf("Start of program headers:\t %lu\n", e_phoff);
		printf("Start of section headers:\t %lu\n", e_shoff);
	}
	else
	{
		fprintf(stderr, "bad class: %d\n", e_ident[4]);
		exit(-1);
	}
	/*uint32_t e_flags;*/
	uint16_t e_ehsize, e_phentsize, e_phnum;
	uint16_t e_shentsize, e_shnum, e_shstrndx;

	READ(e_flags);
	READ(e_ehsize);
	READ(e_phentsize);
	READ(e_phnum);
	READ(e_shentsize);
	READ(e_shnum);
	READ(e_shstrndx);
	printf("Flags:\t 0x%x\n", e_flags);
	printf("Size of this header:\t ");
	if (e_ident[4] == 2)
		printf("64 (bytes)\n");
	else
		printf("52 (bytes)\n"); 
	printf("Size of program headers:\t %u\n", e_phentsize);
	printf("Number of program headers:\t %u\n", e_phnum);
	printf("Size of section headers:\t %u\n", e_shentsize);
	printf("Number of section headers:\t %u\n", e_shnum);
	printf("Section header string table index:\t %u\n", e_shstrndx);
	fclose(fin);
	return 0;
	}
const char *sys_name(uint8_t sys)
{
	switch (sys)
	{
		case 0x00: return "SYSTEM V";
		case 0x01: return "HP-UX";
		case 0x02: return "NET BSD";
		case 0x03: return "Linux";
		case 0x04: return "HP-UX";
		case 0x05: return "GNU Hurd";
		case 0x06: return "Solaris";
		case 0x07: return "AIX";
		case 0x08: return "IRIXcase";
		case 0x0A: return "TRU64";
		case 0x0B: return "Novell Modesto";
		case 0x0C: return "OpenBSD";
		case 0x0D: return "OpenVMS";
		case 0x0E: return "NonStop Kernel";
		case 0x0F: return "AROS";
		case 0x10: return "Fenix OS";
		case 0x11: return "CloudABI";
		case 0x12: return "Stratus Technologies OpenVOS";
	}
	return "Unknown";
}  
const char *type_name(uint16_t type)
{
	switch (type)
	{
		case 0x00:   return "NONE";
		case 0x01:   return "REL";
		case 0x02:   return "EXEC";
		case 0x03:   return "DYN";
		case 0x04:   return "CORE";
		case 0xFE00: return "LOOS";
		case 0xFEFF: return "HIOS";
		case 0xFF00: return "LOPROC";
		case 0xFFFF: return "HIPROC";
	}
	return "Unknown";
}
  
const char *machine_name(uint16_t machine)
{
	switch (machine)
	{
		case 0x00: return "No specific instruction set";
		case 0x01: return "AT&T WE 32100";
		case 0x02: return "SPARC";
		case 0x03: return "x86";
		case 0x04: return "Motorola 68000k (M68k)";
		case 0x05: return "Motorola 88000 (M88k)";
		case 0x06: return "Intel MCU";
		case 0x07: return "Intel 80860";
		case 0x08: return "MIPS";
		case 0x09: return "IBM_System/370";
		case 0x0A: return "MIPS RS3000 Little-endian";
		case 0x0B: return "Reserved for future use";
		case 0x0C: return "Reserved for future use";
		case 0x0D: return "Reserved for future use";
		case 0x0E: return "Hewlett-Packard PA-RISC";
		case 0x0F: return "Reserved for future use";
		case 0x13: return "Intel 80960";
		case 0x14: return "PowerPC";
		case 0x15: return "PowerPC(64-bit)";
		case 0x16: return "S390, including S390x";
		case 0x28: return "ARM (up to ARMv7/Aarch32)";
		case 0x2A: return "SuperH";
		case 0x32: return "IA-64";
		case 0x3E: return "amd64";
		case 0x8C: return "TMS320C6000 Family";
		case 0xB7: return "ARM 64-bits (ARMv8/Aarch64)";
		case 0xF3: return "RISC-V";
		case 0xF7: return "Berkeley Packet Filter";
		case 0x101: return "WDC 65C816";
	}
	return "Unknown";
}
